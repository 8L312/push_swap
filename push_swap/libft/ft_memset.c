/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonney <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 10:16:57 by rmonney           #+#    #+#             */
/*   Updated: 2021/10/25 17:52:00 by rmonney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *str, int c, size_t len)
{
	unsigned char	*strc;

	strc = str;
	while (len > 0)
	{
		*strc = c;
		strc ++;
		len --;
	}
	return (str);
}
/*
int	main(void)
{
	char	str[7] = "KEWKEW";
	char	sc[7] = "KEWKEW";

	memset(str, 65, 5);
	printf("%s\n", str);
	ft_memset(sc, 65, 5);
	printf("%s\n", sc);
	return (0);
}*/
