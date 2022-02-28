/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonney <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 13:14:00 by rmonney           #+#    #+#             */
/*   Updated: 2021/10/26 15:12:49 by rmonney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		a;
	char	i;
	char	*sc;

	a = 0;
	i = 0;
	sc = (char *)s;
	i = (char)c;
	while (sc[a] != '\0')
		a ++;
	while (sc[a] != i && a != 0)
		a --;
	if (a == 0 && sc[a] != i)
		return (NULL);
	else
		return (&sc[a]);
}
/*
int main()
{
	char *s;
	int i;

	s = "abbbbbbbbbbb";
	i = 'a';
	printf("%s\n", ft_strrchr(s, i));
	printf("%s\n", strrchr(s, i));
	return (0);
}*/
