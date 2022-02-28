/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algofor5.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonney <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 18:20:44 by rmonney           #+#    #+#             */
/*   Updated: 2022/01/18 18:34:51 by rmonney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	algofor5(t_var *var)
{
	while (var->lena > 2)
	{
		if (var->stacka[0] == 0 || var->stacka[0] == 1 || var->stacka[0] == 2)
			pb(var);
		else
			ra(var, 1);
	}
	if (var->stackb[0] == 2)
		algofor5_1(var);
	else if (var->stackb[0] == 1)
		algofor5_2(var);
	else if (var->stackb[0] == 0)
		algofor5_3(var);
	while (var->lenb != 0)
		pa(var);
}

void	algofor5_1(t_var *var)
{
	if (var->stackb[0] == 2)
	{
		if (var->stackb[1] == 1 && var->stacka[0] == 4)
			ra(var, 1);
		else if (var->stackb[1] == 0 && var->stacka[0] == 4)
		{
			rrr(var);
			sb(var, 1);
		}
		else if (var->stackb[1] == 0)
		{
			rrb(var, 1);
			sb(var, 1);
		}
	}
}

void	algofor5_2(t_var *var)
{
	if (var->stackb[0] == 1)
	{
		if (var->stackb[1] == 2 && var->stacka[0] == 4)
			ss(var);
		else if (var->stackb[1] == 2)
			sb(var, 1);
		else if (var->stackb[1] == 0 && var->stacka[0] == 4)
			rrr(var);
		else if (var->stackb[1] == 0)
			rrb(var, 1);
	}
}

void	algofor5_3(t_var *var)
{
	if (var->stackb[0] == 0)
	{
		if (var->stackb[1] == 2 && var->stacka[0] == 4)
			rr(var);
		else if (var->stackb[1] == 2)
			rb(var, 1);
		else if (var->stackb[1] == 1 && var->stacka[0] == 4)
		{
			ss(var);
			rrb(var, 1);
		}
		else if (var->stackb[1] == 1)
		{
			sb(var, 1);
			rrb(var, 1);
		}
	}
}
