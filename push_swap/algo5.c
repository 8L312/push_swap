/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo5.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonney <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 17:42:12 by rmonney           #+#    #+#             */
/*   Updated: 2022/01/20 00:01:46 by rmonney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	algo5(t_var *var)
{
	while (var->lena > 100)
	{
		if (var->stacka[0] < 100)
			ra(var, 1);
		else
			pb(var);
	}
	while (var->lena > 0)
	{
		algo5_1(var);
		algo5_2(var);
	}
	algo5_6(var);
	algo5_7(var);
	algo5_8(var);
	algo5_9(var);
}

void	algo5_1(t_var *var)
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

void	algo5_2(t_var *var)
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

void	algo5_6(t_var *var)
{
	while (where_is_b(var, 99) != 0)
		rrb(var, 1);
	while (where_is_a(var, 0) != 0)
		pa(var);
	while (var->lenb > 100)
	{
		if (var->stackb[0] < 200)
			rb(var, 1);
		else
			pa(var);
	}
	algo5_3(var);
	while (where_is_a(var, 199) != 0)
		rra(var, 1);
	while (where_is_b(var, 100) != 0)
		pb(var);
	while (var->lenb > 0)
	{
		pa(var);
		ra(var, 1);
	}
}

void	algo5_7(t_var *var)
{
	while (var->stacka[0] != 0)
	{
		if (var->stacka[0] < 300)
			pb(var);
		else
			ra(var, 1);
	}
	algo5_3(var);
	while (where_is_a(var, 299) != 0)
		rra(var, 1);
	while (where_is_b(var, 200) != 0)
		pb(var);
	while (var->stacka[var->lena - 1] != 199)
	{
		if (var->stacka[var->lena - 1] < 400)
		{
			rra(var, 1);
			pb(var);
			rb(var, 1);
		}
		else
			rra(var, 1);
	}
}
