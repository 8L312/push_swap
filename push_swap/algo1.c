/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonney <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 16:20:10 by rmonney           #+#    #+#             */
/*   Updated: 2022/01/20 22:19:08 by rmonney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	algo_choose(t_var *var)
{
	var->mode = 1;
	if (stack_check(var))
		exit(0);
	if (var->lena == 3)
		algofor3(var);
	else if (var->lena == 4)
		algo1(var);
	else if (var->lena == 5)
		algofor5(var);
	else if (var->lena < 500 && !stack_check(var))
		algo4(var);
	else if (var->lena == 500 && !stack_check(var))
		algo5(var);
	else
		algo1(var);
}

void	algo1(t_var *var)
{
	if (!stack_check(var))
	{
		while (var->lena > 1)
		{
			if (search_small_a(var) <= (var->lena / 2))
			{
				while (search_small_a(var) != 0)
					ra(var, 1);
				pb(var);
			}
			else
			{
				while (search_small_a(var) != 0)
					rra(var, 1);
				pb(var);
			}
		}
		while (!stack_check(var))
			pa(var);
	}
}

void	algofor3(t_var *var)
{
	if (var->stacka[0] == 0)
	{
		rra(var, 1);
		sa(var, 1);
	}
	else if (var->stacka[0] == 1)
	{
		if (var->stacka[1] == 0)
			sa(var, 1);
		else
			rra(var, 1);
	}
	else if (var->stacka[0] == 2)
	{
		if (var->stacka[1] == 0)
			ra(var, 1);
		else
		{
			sa(var, 1);
			rra(var, 1);
		}
	}
}
