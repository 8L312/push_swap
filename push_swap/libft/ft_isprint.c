/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonney <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 09:50:33 by rmonney           #+#    #+#             */
/*   Updated: 2021/10/26 14:54:35 by rmonney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isprint(int c)
{
	int	i;

	i = 0;
	if (31 < c && c < 127)
		i ++;
	return (i);
}
/*
int main()
{
	int a = 127;

	printf("%d\n", ft_isprint(a));
	printf("%d\n", isprint(a));
	return (0);
}*/
