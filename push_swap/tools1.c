/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonney <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 18:27:13 by rmonney           #+#    #+#             */
/*   Updated: 2022/01/18 19:57:33 by rmonney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	search_small_a(t_var *var)
{
	int	i;
	int	ret;

	i = 0;
	while (i < var->lena)
	{
		if (smallest_a(var, i))
		{
			ret = i;
			i++;
		}
		else
			i++;
	}
	return (ret);
}

int	smallest_a(t_var *var, int index)
{
	int	i;

	i = 0;
	while (i < var->lena)
	{
		if (var->stacka[index] <= var->stacka[i])
			i++;
		else
			return (0);
	}
	return (1);
}

int	biggest_a(t_var *var, int index)
{
	int	i;

	i = 0;
	while (i < var->lena)
	{
		if (var->stacka[index] >= var->stacka[i])
			i++;
		else
			return (0);
	}
	return (1);
}

int	search_big_a(t_var *var)
{
	int	i;
	int	ret;

	i = 0;
	while (i < var->lena)
	{
		if (biggest_a(var, i))
		{
			ret = i;
			i++;
		}
		else
			i++;
	}
	return (ret);
}
