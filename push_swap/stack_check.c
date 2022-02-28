/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonney <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 15:49:24 by rmonney           #+#    #+#             */
/*   Updated: 2022/01/20 15:49:09 by rmonney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	stack_cpy(t_var *var, t_var *algx)
{
	algx->i = 0;
	algx->move = 0;
	algx->mode = 0;
	algx->lena = var->lena;
	algx->lenb = 0;
	while (algx-> i < algx->lena)
	{
		algx->stacka[algx->i] = var->stacka[algx->i];
		algx->i++;
	}
	algx->i = 0;
	stack_simple(var, algx);
	algx->small = 0;
	algx->big = algx->stacka[search_big_a(var)];
	algx->mid = search_mid_a(algx);
}

int	search_2nd_big(t_var *var, int max)
{
	int	index;
	int	min;
	int	inter;
	int	big2index;

	min = var->stacka[search_small_a(var)];
	inter = min;
	index = 0;
	while (index < var->lena)
	{
		if (var->stacka[index] > inter && var->stacka[index] < max)
		{
			inter = var->stacka[index];
			big2index = index;
			index++;
		}
		else
			index++;
	}
	if (inter == min)
		return (search_small_a(var));
	return (big2index);
}

void	stack_simple(t_var *var, t_var *algx)
{
	int	index_max;
	int	min;

	min = var->stacka[search_small_a(var)];
	index_max = search_big_a(var);
	algx->stacka[index_max] = algx->lena - 1;
	algx->lena--;
	while (algx->lena > 0)
	{
		index_max = search_2nd_big(var, var->stacka[index_max]);
		algx->stacka[index_max] = algx->lena - 1;
		algx->lena--;
	}
	algx->lena = var->lena;
}

int	stack_check(t_var *var)
{
	var->i = 0;
	if (var->lenb != 0)
		return (0);
	while (var->i < var->lena - 1)
	{
		if (var->stacka[var->i] < var->stacka[var->i + 1])
			var->i++;
		else
			return (0);
	}
	return (1);
}
