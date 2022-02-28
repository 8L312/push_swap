/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonney <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 19:52:41 by rmonney           #+#    #+#             */
/*   Updated: 2022/01/13 23:31:51 by rmonney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	rra(t_var *var, int a)
{
	int	i;

	var->trans = var->stacka[var->lena - 1];
	i = var->lena - 1;
	if (var->lena > 1)
	{
		while (i > 0)
		{
			var->stacka[i] = var->stacka[i - 1];
			i--;
		}
		var->stacka[0] = var->trans;
		if (a == 1 && var-> mode == 1)
			write(1, "rra\n", 4);
		if (a == 1 && var->mode == 0)
			var->move++;
	}
}

void	rrb(t_var *var, int a)
{
	int	i;

	var->trans = var->stackb[var->lenb - 1];
	i = var->lenb - 1;
	if (var->lenb > 1)
	{
		while (i > 0)
		{
			var->stackb[i] = var->stackb[i - 1];
			i--;
		}
		var->stackb[0] = var->trans;
		if (a == 1 && var-> mode == 1)
			write(1, "rrb\n", 4);
		if (a == 1 && var->mode == 0)
			var->move++;
	}
}

void	rrr(t_var *var)
{
	rra(var, 2);
	rrb(var, 2);
	if (var-> mode == 1)
		write(1, "rrr\n", 4);
	else
		var->move++;
}
