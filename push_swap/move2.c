/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonney <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 19:49:50 by rmonney           #+#    #+#             */
/*   Updated: 2022/01/17 22:11:51 by rmonney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	pb(t_var *var)
{
	int	i;

	i = var->lenb - 1;
	if (var->lena > 0)
	{
		while (i >= 0)
		{
			var->stackb[i + 1] = var->stackb[i];
			i--;
		}
		var->stackb[0] = var->stacka[0];
		i = 0;
		while (i <= (var->lena - 1))
		{
			var->stacka[i] = var->stacka[i + 1];
			i++;
		}
		var->lenb++;
		var->lena--;
		if (var-> mode == 1)
			write(1, "pb\n", 3);
		else
			var->move++;
	}
}

void	ra(t_var *var, int a)
{
	int	i;

	i = 0;
	if (var->lena > 1)
	{
		var->trans = var->stacka[0];
		while (i <= (var->lena - 1))
		{
			var->stacka[i] = var->stacka[i + 1];
			i++;
		}
		var->stacka[var->lena - 1] = var->trans;
		if (a == 1 && var-> mode == 1)
			write(1, "ra\n", 3);
		if (a == 1 && var-> mode == 0)
			var->move++;
	}
}

void	rb(t_var *var, int a)
{
	int	i;

	i = 0;
	if (var->lenb > 1)
	{
		var->trans = var->stackb[0];
		while (i <= (var->lenb - 1))
		{
			var->stackb[i] = var->stackb[i + 1];
			i++;
		}
		var->stackb[var->lenb - 1] = var->trans;
		if (a == 1 && var-> mode == 1)
			write(1, "rb\n", 3);
		if (a == 1 && var->mode == 0)
			var->move++;
	}
}

void	rr(t_var *var)
{
	ra(var, 2);
	rb(var, 2);
	if (var-> mode == 1)
		write(1, "rr\n", 3);
	else
		var->move++;
}
