/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonney <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 18:30:19 by rmonney           #+#    #+#             */
/*   Updated: 2021/10/28 14:34:25 by rmonney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*sc;
	unsigned int	i;

	i = 0;
	if (!s)
		return (NULL);
	sc = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!sc)
		return (NULL);
	while (i < ft_strlen(s))
	{
		sc[i] = (*f)(i, s[i]);
		i ++;
	}
	sc[i] = '\0';
	return (sc);
}
/*
#include "ft_strlen.c"
char	my_func(unsigned int i, char c)
{
	printf("My inner function: index = %d and %c\n", i, c);
	return (c - 32);
}

int main()
{
	char *str = "hallojudas";
	printf("Avant : %s\n", str);
	char *result = ft_strmapi(str, &my_func);
	printf("Apres : %s\n", result);
	return 0;
}*/
