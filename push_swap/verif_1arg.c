/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verif_1arg.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonney <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 18:38:53 by rmonney           #+#    #+#             */
/*   Updated: 2022/01/20 22:14:04 by rmonney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	numberizer(char *arg, int i, int j)
{
	char	*num;
	int		c;
	int		a;

	a = 0;
	num = malloc(sizeof(char) * 12);
	if (!num)
		return (0);
	while (j < i)
		num[a++] = arg[j++];
	num[a] = '\0';
	c = ft_atoi(num);
	free(num);
	return (c);
}

int	onlynum(char *arg)
{
	int	i;

	i = 0;
	while (arg[i] != '\0')
	{
		if (onlynum_1(arg, i) == -1)
			return (0);
		else
			i = onlynum_1(arg, i);
		if (47 < arg[i] && arg[i] <= 57)
			i++;
		else
			return (0);
		if (arg[i] == 32)
		{
			if (arg[i + 1] == 43 || arg[i + 1] == 45
				|| (47 < arg[i + 1] && arg[i + 1] <= 57))
				i++;
			else
				return (0);
		}
	}
	return (1);
}

int	nodouble(int list[666], int x)
{
	int	a;
	int	b;

	a = 0;
	while (a < x)
	{
		b = a + 1;
		if (list[a] < -2147483648 || 2147483647 < list[a])
			return (0);
		while (b <= x)
		{
			if (list[a] == list[b])
				return (0);
			b++;
		}
		a++;
	}
	if (list[x] < -2147483648 || 2147483647 < list[x])
		return (0);
	return (1);
}

int	sizeverif(char *arg, int i, int j)
{
	char	*num;
	long	n;

	num = ft_substr(arg, j, i - j);
	n = ft_atoi(num);
	free(num);
	if (n < -2147483648 || n > 2147483647)
		return (0);
	else
		return (1);
}

int	verif_1arg(char *arg)
{
	int		x;
	int		list[666];
	int		i;
	int		j;

	x = 0;
	i = 0;
	j = 0;
	if (!onlynum(arg))
		return (0);
	while (arg[i] != '\0')
	{
		j = i;
		while ((47 < arg[i] && arg[i] <= 57) || arg[i] == 45 || arg[i] == 43)
			i++;
		if (!sizeverif(arg, i, j))
			return (0);
		list[x++] = numberizer(arg, i, j);
		if (arg[i] == 32)
			i++;
	}
	if (!nodouble(list, x))
		return (0);
	return (1);
}
