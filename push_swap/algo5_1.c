/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo5_1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonney <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 23:37:58 by rmonney           #+#    #+#             */
/*   Updated: 2022/01/20 00:00:49 by rmonney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	algo5_3(t_var *var)
{
	while (var->lenb > 0)
	{
		algo5_4(var);
		algo5_5(var);
	}
}

void	algo5_4(t_var *var)
{
	if (whonear_sb_b(var) == 1)
	{
		while (search_small_b(var) != 0)
			rb(var, 1);
		pa(var);
	}
	else if (whonear_sb_b(var) == 2)
	{
		while (search_small_b(var) != 0)
			rrb(var, 1);
		pa(var);
	}
}

void	algo5_5(t_var *var)
{
	if (whonear_sb_b(var) == 3)
	{
		while (search_big_b(var) != 0)
			rb(var, 1);
		pa(var);
		if (whonear_sb_b(var) == 1 || whonear_sb_b(var) == 3)
			rr(var);
		else
			ra(var, 1);
	}
	else if (whonear_sb_b(var) == 4)
	{
		while (search_big_b(var) != 0)
			rrb(var, 1);
		pa(var);
		if (whonear_sb_b(var) == 1 || whonear_sb_b(var) == 3)
			rr(var);
		else
			ra(var, 1);
	}
}

void	algo5_8(t_var *var)
{
	while (var->stackb[0] < 300)
	{
		pa(var);
		ra(var, 1);
	}
	algo5_3(var);
	while (where_is_a(var, 399) != 0)
		rra(var, 1);
	while (where_is_b(var, 300) != 0)
		pb(var);
	while (var->lenb > 0)
	{
		pa(var);
		ra(var, 1);
	}
}

void	algo5_9(t_var *var)
{
	while (var->stacka[0] != 0)
		pb(var);
	algo5_3(var);
	while (where_is_a(var, 499) != 0)
		rra(var, 1);
	while (where_is_b(var, 400) != 0)
		pb(var);
	while (var->lenb > 0)
	{
		pa(var);
		ra(var, 1);
	}
}
