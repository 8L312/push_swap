/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonney <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 18:04:18 by rmonney           #+#    #+#             */
/*   Updated: 2021/10/26 14:44:51 by rmonney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*sc1;
	unsigned char	*sc2;

	sc1 = (unsigned char *)s1;
	sc2 = (unsigned char *)s2;
	while (*sc1 == *sc2 && n > 1 && sc1 != (void *)0 && sc2 != (void *)0)
	{
		sc1 ++;
		sc2 ++;
		n --;
	}
	if (n == 0)
		return (0);
	return (*sc1 - *sc2);
}
/*
int main()
{
	char *s1 = "halo";
	char *s2 = "haloa";

	printf("%d\n", memcmp(s1, s2, 5));
	printf("%d\n", ft_memcmp(s1, s2, 5));
	return (0);
}*/
