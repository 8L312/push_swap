/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonney <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 15:20:08 by rmonney           #+#    #+#             */
/*   Updated: 2021/11/03 14:54:26 by rmonney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	mallocsize(char const *s, unsigned int start, size_t len)
{
	int	size;

	size = 0;
	if (start + len <= ft_strlen(s) && start < ft_strlen(s))
		size = len;
	else if (start + len > ft_strlen(s) && start < ft_strlen(s))
		size = ft_strlen(s) - start;
	return (size);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	char	*sc;
	int		i;

	if (!s)
		return (NULL);
	sc = (char *)s;
	i = mallocsize(s, start, len);
	if (start > ft_strlen(s) || !len)
	{
		str = malloc(sizeof(char));
		str[0] = '\0';
		return (str);
	}
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (len > 0)
	{
		str[i++] = sc[start++];
		len --;
	}
	str[i] = '\0';
	return (str);
}
/*
int main()
{
	char *s;

	s = "JUDAS";
	printf("%s\n", ft_substr(s, 8, 5));
	return (0);
}*/
