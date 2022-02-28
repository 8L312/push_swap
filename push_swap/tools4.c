/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tool4.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonney <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 15:04:40 by rmonney           #+#    #+#             */
/*   Updated: 2022/01/19 19:54:09 by rmonney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	whonear_sb_b(t_var *var)
{
	whonear_sb_b_1(var);
	if (var->dist_s <= var->dist_b)
	{
		if (var->sh == 0)
			return (1);
		else
			return (2);
	}
	else
	{
		if (var->bh == 0)
			return (3);
		else
			return (4);
	}
}

void	whonear_sb_b_1(t_var *var)
{
	var->sh = 0;
	var->bh = 0;
	if (search_small_b(var) <= ((var->lenb - 1) / 2))
		var->dist_s = search_small_b(var);
	else
	{
		var->dist_s = (var->lenb - 1) - search_small_b(var);
		var->sh++;
	}
	if (search_big_b(var) <= ((var->lenb - 1) / 2))
		var->dist_b = search_big_b(var);
	else
	{
		var->dist_b = (var->lenb - 1) - search_big_b(var);
		var->bh++;
	}
}

int	whonear_sb_a(t_var *var)
{
	whonear_sb_a_1(var);
	if (var->dist_s <= var->dist_b)
	{
		if (var->sh == 0)
			return (1);
		else
			return (2);
	}
	else
	{
		if (var->bh == 0)
			return (3);
		else
			return (4);
	}
}

void	whonear_sb_a_1(t_var *var)
{
	var->sh = 0;
	var->bh = 0;
	if (search_small_a(var) <= ((var->lena - 1) / 2))
		var->dist_s = search_small_a(var);
	else
	{
		var->dist_s = (var->lena - 1) - search_small_a(var);
		var->sh++;
	}
	if (search_big_a(var) <= ((var->lena - 1) / 2))
		var->dist_b = search_big_a(var);
	else
	{
		var->dist_b = (var->lena - 1) - search_big_a(var);
		var->bh++;
	}
}
