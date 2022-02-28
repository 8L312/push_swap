/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verif_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonney <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 16:57:40 by rmonney           #+#    #+#             */
/*   Updated: 2022/01/20 22:11:25 by rmonney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	onlynum_1(char *arg, int i)
{
	if (arg[i] == 45 || arg[i] == 43)
	{
		if (i == 0)
		{
			if (47 < arg[i + 1] && arg[i + 1] <= 57)
				i++;
			else
				return (-1);
		}
		else
		{
			if (arg[i - 1] == 32 && (47 < arg[i + 1] && arg[i + 1] <= 57))
				i++;
			else
				return (-1);
		}
	}
	return (i);
}

int	onlynum2(char *arg)
{
	int	i;

	i = 0;
	if (arg[i] == 45 || arg[i] == 43)
	{
		if (47 < arg[1] && arg[1] <= 57)
			i++;
		else
			return (0);
	}
	while (arg[i] != '\0')
	{
		if (47 < arg[i] && arg[i] <= 57)
			i++;
		else
			return (0);
	}
	return (1);
}

int	sizeverif2(char *arg)
{
	long	n;

	n = ft_atoi(arg);
	if (n < -2147483648 || n > 2147483647)
		return (0);
	else
		return (1);
}

int	verif_args(char **arg)
{
	int	list[666];
	int	x;

	x = 1;
	while (arg[x])
	{
		if (!onlynum2(arg[x]))
			return (0);
		if (!sizeverif2(arg[x]))
			return (0);
		list[x - 1] = ft_atoi(arg[x]);
		x++;
	}
	x -= 2;
	if (!nodouble(list, x))
		return (0);
	return (1);
}
