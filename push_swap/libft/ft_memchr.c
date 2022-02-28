/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonney <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 14:59:02 by rmonney           #+#    #+#             */
/*   Updated: 2021/11/02 14:59:08 by rmonney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*sc;

	sc = (unsigned char *)s;
	while (n--)
	{
		if (*sc == (unsigned char)c)
			return (sc);
		sc++;
	}
	return (NULL);
}

/*
int main()
{
	char	*s = "JUDAS";
	int		c = 65;

	printf("%s\n", memchr(s, c, 39));
	printf("%s\n", ft_memchr(s, c, 39));
	return (0);
}*/
