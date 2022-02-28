/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonney <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 11:45:22 by rmonney           #+#    #+#             */
/*   Updated: 2021/11/20 15:30:31 by rmonney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	char	*strc;

	strc = str;
	while (n > 0)
	{
		strc ++;
		n --;
	}
}
/*
int	main(void)
{
	char    str[7] = "KEWKEW";
	char    sc[7] = "KEWKEW";
	ft_bzero(str, 3);
	printf("%s\n", str);
	bzero(sc, 3);
	printf("%s\n", sc);
	return (0);
}*/
