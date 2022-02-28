/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonney <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 14:37:39 by rmonney           #+#    #+#             */
/*   Updated: 2021/11/02 14:58:27 by rmonney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*str;
	unsigned long	i;
	int				a;
	int				b;

	a = 0;
	b = 0;
	if (!s1 || !s2)
		return (NULL);
	i = ft_strlen(s1) + ft_strlen(s2);
	str = malloc(sizeof(char) * i + 1);
	if (!str)
		return (NULL);
	while (s1[a] != '\0')
	{
		str[a] = s1[a];
		a ++;
	}
	while (s2[b] != '\0')
		str[a++] = s2[b++];
	str[a] = '\0';
	return (str);
}
/*
int main()
{
	char *a;
	char *b;

	a = "COUCOU";
	b = "JUDAS";
	printf("%s\n", ft_strjoin(a, b));
	return (0);
}*/
