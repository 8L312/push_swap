/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo4.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonney <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 21:59:02 by rmonney           #+#    #+#             */
/*   Updated: 2022/01/19 23:26:04 by rmonney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	algo4(t_var *var)
{
	while (var->lenb != var->mid)
		pb(var);
	var->small = var->stackb[search_small_b(var)];
	var->big = var->stackb[search_big_b(var)];
	while (var->lenb > 0)
	{
		algo4_1(var);
		algo4_2(var);
	}
	while (where_is_a(var, var->big) != 0)
		rra(var, 1);
	while (where_is_b(var, var->small) != 0)
		pb(var);
	var->small = var->stacka[search_small_a(var)];
	var->big = var->stacka[search_big_a(var)];
	while (var->lena > 0)
	{
		algo4_3(var);
		algo4_4(var);
	}
	while (where_is_b(var, var->big) != 0)
		rrb(var, 1);
	while (where_is_a(var, var->small) != 0)
		pa(var);
	algo4_5(var);
}

void	algo4_1(t_var *var)
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

void	algo4_2(t_var *var)
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

void	algo4_3(t_var *var)
{
	if (whonear_sb_a(var) == 1)
	{
		while (search_small_a(var) != 0)
			ra(var, 1);
		pb(var);
	}
	else if (whonear_sb_a(var) == 2)
	{
		while (search_small_a(var) != 0)
			rra(var, 1);
		pb(var);
	}
}

void	algo4_4(t_var *var)
{
	if (whonear_sb_a(var) == 3)
	{
		while (search_big_a(var) != 0)
			ra(var, 1);
		pb(var);
		if (whonear_sb_a(var) == 1 || whonear_sb_a(var) == 3)
			rr(var);
		else
			rb(var, 1);
	}
	else if (whonear_sb_a(var) == 4)
	{
		while (search_big_a(var) != 0)
			rra(var, 1);
		pb(var);
		if (whonear_sb_a(var) == 1 || whonear_sb_a(var) == 3)
			rr(var);
		else
			rb(var, 1);
	}
}
