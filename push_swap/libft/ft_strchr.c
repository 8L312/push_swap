/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonney <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 11:09:49 by rmonney           #+#    #+#             */
/*   Updated: 2021/10/20 18:10:59 by rmonney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	i;
	int		a;
	char	*sc;

	i = 0;
	a = 0;
	sc = NULL;
	i = (char)c;
	sc = (char *)s;
	while (sc[a] != i && sc[a] != '\0')
		a ++;
	if (sc[a] == '\0' && c != '\0')
		return (NULL);
	else
		return (&sc[a]);
}
/*
int main()
{
	char *s;
	int i;

	s = "KEWLOL";
	i = '\0';
	printf("%p\n", ft_strchr(s, i));
	printf("%p\n", strchr(s, i));
	return (0);
}*/
