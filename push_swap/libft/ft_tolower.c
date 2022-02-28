/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonney <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 11:02:27 by rmonney           #+#    #+#             */
/*   Updated: 2021/10/20 18:10:05 by rmonney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_tolower(int c)
{
	if (64 < c && c < 91)
		c += 32;
	return (c);
}
/*
int main()
{
	int i;

	i = 'G';
	printf("%d\n", ft_tolower(i));
	printf("%d\n", tolower(i));
	return (0);
}*/
