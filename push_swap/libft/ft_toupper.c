/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonney <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 10:53:40 by rmonney           #+#    #+#             */
/*   Updated: 2021/10/20 18:09:52 by rmonney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_toupper(int c)
{
	if (96 < c && c < 123)
		c -= 32;
	return (c);
}
/*
int main()
{
	int i;

	i = '&';
	printf("%d\n", ft_toupper(i));
	printf("%d\n", toupper(i));
	return (0);
}*/
