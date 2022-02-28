/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonney <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 16:54:13 by rmonney           #+#    #+#             */
/*   Updated: 2022/01/19 23:01:37 by rmonney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	where_is_a(t_var *var, int n)
{
	int	i;

	i = 0;
	while (i <= (var->lena - 1))
	{
		if (var->stacka[i] == n)
			return (i);
		else
			i++;
	}
	return (-1);
}

int	search_mid_a(t_var *var)
{
	int	mid;

	if (var->lena % 2 == 0)
		mid = var->lena / 2;
	else
		mid = (var->lena / 2) + 1;
	return (mid);
}

int	who_near(t_var *var)
{
	who_near_1(var);
	if (where_is_a(var, var->small) == -1)
		var->dist_s = 900;
	if (where_is_a(var, var->mid) == -1)
		var->dist_m = 900;
	if (var->dist_s <= var->dist_m)
	{
		if (var->sh == 0)
			return (1);
		else
			return (2);
	}
	else
	{
		if (var->mh == 0)
			return (3);
		else
			return (4);
	}
}

void	who_near_1(t_var *var)
{
	var->sh = 0;
	var->mh = 0;
	if (where_is_a(var, var->small) <= ((var->lena) / 2))
		var->dist_s = where_is_a(var, var->small);
	else
	{
		var->dist_s = (var->lena - 1) - where_is_a(var, var->small);
		var->sh++;
	}
	if (where_is_a(var, var->mid) <= ((var->lena) / 2))
		var->dist_m = where_is_a(var, var->mid);
	else
	{
		var->dist_m = (var->lena - 1) - where_is_a(var, var->mid);
		var->mh++;
	}
}
