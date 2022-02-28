/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonney <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 19:16:34 by rmonney           #+#    #+#             */
/*   Updated: 2022/01/18 21:59:37 by rmonney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	algo3(t_var *var)
{
	while (var->lenb != var->mid)
		pb(var);
	while (var->lenb > 2)
	{
		while (search_small_b(var) != 0)
		{
			if (search_small_b(var) <= var->lenb / 2)
				rb(var, 1);
			else
				rrb(var, 1);
		}
		pa(var);
	}
	if (var->stackb[0] > var->stackb[1])
		sb(var, 1);
	while (var->lenb != var->mid)
		pb(var);
	algo3_1(var);
	algo3_2(var);
}

void	algo3_1(t_var *var)
{
	while (var->lena > 2)
	{
		while (search_small_a(var) != 0)
		{
			if (search_small_a(var) <= var->lena / 2)
				ra(var, 1);
			else
				rra(var, 1);
		}
		pb(var);
	}
	if (var->stacka[0] > var->stacka[1])
		sa(var, 1);
	while (var->lena != var->mid)
		pa(var);
}

void	algo3_2(t_var *var)
{
	while (var->lenb != 0)
	{
		if (var->stacka[0] > var->stackb[0])
		{
			pa(var);
			ra(var, 1);
		}
		else if (var->stacka[0] < var->stackb[0])
		{
			if (var->stacka[where_is_a(var, search_big_a(var))]
				< var->stackb[0] && var->stacka[0] == 0)
			{
				pa(var);
				ra(var, 1);
			}
			else
				ra(var, 1);
		}
	}
	while (var->stacka[0] != 0)
		ra(var, 1);
}
