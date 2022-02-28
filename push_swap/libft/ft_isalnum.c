/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonney <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 18:36:37 by rmonney           #+#    #+#             */
/*   Updated: 2021/10/26 15:00:48 by rmonney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isalnum(int c)
{
	int	a;

	a = 0;
	if (47 < c && c <= 57)
		a ++;
	else if ((64 < c && c < 91) || (96 < c && c < 123))
		a ++;
	return (a);
}
/*
int main(void)
{
	char c;

	c = 'Z';
	printf("%d\n", ft_isalnum(c));
	printf("%d\n", isalnum(c));
	return (0);
}*/
