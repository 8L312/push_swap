/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonney <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 20:01:04 by rmonney           #+#    #+#             */
/*   Updated: 2022/01/19 14:44:26 by rmonney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	search_small_b(t_var *var)
{
	int	i;
	int	ret;

	i = 0;
	while (i < var->lenb)
	{
		if (smallest_b(var, i))
		{
			ret = i;
			i++;
		}
		else
			i++;
	}
	return (ret);
}

int	smallest_b(t_var *var, int index)
{
	int	i;

	i = 0;
	while (i < var->lenb)
	{
		if (var->stackb[index] <= var->stackb[i])
			i++;
		else
			return (0);
	}
	return (1);
}

int	where_is_b(t_var *var, int n)
{
	int	i;

	i = 0;
	while (i <= (var->lenb - 1))
	{
		if (var->stackb[i] == n)
			return (i);
		else
			i++;
	}
	return (-1);
}

int	biggest_b(t_var *var, int index)
{
	int	i;

	i = 0;
	while (i < var->lenb)
	{
		if (var->stackb[index] >= var->stackb[i])
			i++;
		else
			return (0);
	}
	return (1);
}

int	search_big_b(t_var *var)
{
	int	i;
	int	ret;

	i = 0;
	while (i < var->lenb)
	{
		if (biggest_b(var, i))
		{
			ret = i;
			i++;
		}
		else
			i++;
	}
	return (ret);
}
