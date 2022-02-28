/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonney <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 16:12:26 by rmonney           #+#    #+#             */
/*   Updated: 2022/01/19 15:50:26 by rmonney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	algo2(t_var *var)
{
	var->small = 0;
	var->mid = search_mid_a(var);
	algo2_1(var);
	if (var->stacka[0] > var->stackb[0] + 1)
	{
		pb(var);
		rb(var, 1);
		pa(var);
	}
	while (var->lenb > 0)
	{
		if (var->stackb[0] > var->stacka[0])
		{
			pa(var);
			ra(var, 1);
		}
		if (var->stackb[0] < var->stacka[0])
			pa(var);
	}
}

void	algo2_1(t_var *var)
{
	while (var->lena > 1)
	{
		if (who_near(var) == 1)
		{
			while (where_is_a(var, var->small) != 0)
				ra(var, 1);
			pb(var);
			var->small++;
		}
		else if (who_near(var) == 2)
		{
			while (where_is_a(var, var->small) != 0)
				rra(var, 1);
			pb(var);
			var->small++;
		}
		else if (who_near(var) == 3 || who_near(var) == 4)
			algo2_2(var);
	}
}

void	algo2_2(t_var *var)
{
	if (who_near(var) == 3)
	{
		while (where_is_a(var, var->mid) != 0)
			ra(var, 1);
		pb(var);
		var->mid++;
		if (who_near(var) == 1 || who_near(var) == 3)
			rr(var);
		else
			rb(var, 1);
	}
	else if (who_near(var) == 4)
	{
		while (where_is_a(var, var->mid) != 0)
			rra(var, 1);
		pb(var);
		var->mid++;
		if (who_near(var) == 1 || who_near(var) == 3)
			rr(var);
		else
			rb(var, 1);
	}
}
