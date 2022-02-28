/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stackwriter.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonney <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 21:38:22 by rmonney           #+#    #+#             */
/*   Updated: 2022/01/13 16:18:25 by rmonney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	beforemove(t_var *var)
{
	printf("***BEFORE MOVE***\n");
	stackwriter(var);
}

void	aftermove(t_var *var)
{
	printf("***AFTER MOVE***\n");
	stackwriter(var);
}

void	needsortout(void)
{
	printf("need to sort out\n");
}

void	stacksorted(void)
{
	printf("the stack is sorted\n");
}

void	stackwriter(t_var *var)
{
	int	c;
	int	d;

	c = 0;
	if (var->lena >= var->lenb)
		d = var->lena - 1;
	else
		d = var->lenb - 1;
	printf("A		B\n");
	printf("-----------------\n");
	while (c <= d)
	{
		if (c <= (var->lena - 1))
			printf("%d	", var->stacka[c]);
		else
			printf("X	");
		if (c <= (var->lenb - 1))
			printf("	%d\n", var->stackb[c]);
		else
			printf("	X\n");
		c++;
	}
	printf("-----------------\n");
}
