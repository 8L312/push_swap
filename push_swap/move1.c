/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonney <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 19:42:01 by rmonney           #+#    #+#             */
/*   Updated: 2022/01/17 22:12:33 by rmonney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	sa(t_var *var, int a)
{
	if (var->lena > 1)
	{
		var->trans = var->stacka[1];
		var->stacka[1] = var->stacka[0];
		var->stacka[0] = var->trans;
		if (a == 1 && var->mode == 1)
			write(1, "sa\n", 3);
		if (a == 1 && var->mode == 0)
			var->move++;
	}
}

void	sb(t_var *var, int a)
{
	if (var->lenb > 1)
	{
		var->trans = var->stackb[1];
		var->stackb[1] = var->stackb[0];
		var->stackb[0] = var->trans;
		if (a == 1 && var->mode == 1)
			write(1, "sb\n", 3);
		if (a == 1 && var-> mode == 0)
			var->move++;
	}
}

void	ss(t_var *var)
{
	sa(var, 2);
	sb(var, 2);
	if (var-> mode == 1)
		write(1, "ss\n", 3);
	else
		var->move++;
}

void	pa(t_var *var)
{
	int	i;

	i = var->lena - 1;
	if (var->lenb > 0)
	{
		while (i >= 0)
		{
			var->stacka[i + 1] = var->stacka[i];
			i--;
		}
		var->stacka[0] = var->stackb[0];
		i = 0;
		while (i <= (var->lenb - 1))
		{
			var->stackb[i] = var->stackb[i + 1];
			i++;
		}
		var->lena++;
		var->lenb--;
		if (var-> mode == 1)
			write(1, "pa\n", 3);
		else
			var->move++;
	}
}
