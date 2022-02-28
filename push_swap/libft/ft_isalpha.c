/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonney <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 17:56:09 by rmonney           #+#    #+#             */
/*   Updated: 2021/10/26 14:53:05 by rmonney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isalpha(int c)
{
	int	a;

	a = 0;
	if ((64 < c && c < 91) || (96 < c && c < 123))
		a ++;
	return (a);
}
/*
int main(void)
{
	char c;

	c = '5';
	printf("%d\n", ft_isalpha(c));
	printf("%d\n", isalpha(c));
	return (0);
}*/
