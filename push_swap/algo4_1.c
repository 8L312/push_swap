/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo4_1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonney <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 23:24:50 by rmonney           #+#    #+#             */
/*   Updated: 2022/01/19 23:25:09 by rmonney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	algo4_5(t_var *var)
{
	while (var->lenb != 0)
	{
		if (var->stacka[0] > var->stackb[0])
		{
			pa(var);
			ra(var, 1);
		}
		else if (var->stacka[0] < var->stackb[0])
		{
			if (var->stacka[where_is_a(var, search_big_a(var))]
				< var->stackb[0] && var->stacka[0] == 0)
			{
				pa(var);
				ra(var, 1);
			}
			else
				ra(var, 1);
		}
	}
	while (var->stacka[0] != 0)
		ra(var, 1);
}
