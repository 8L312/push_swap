/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonney <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 09:35:53 by rmonney           #+#    #+#             */
/*   Updated: 2021/10/26 14:54:17 by rmonney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isascii(int c)
{
	int	i;

	i = 0;
	if (0 <= c && c < 128)
		i ++;
	return (i);
}
/*
int main(void)
{
	int i;

	i = -77;
	printf("%d\n", ft_isascii(i));
	printf("%d\n", isascii(i));
	return(0);
}*/
