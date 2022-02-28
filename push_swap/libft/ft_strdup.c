/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonney <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 17:58:49 by rmonney           #+#    #+#             */
/*   Updated: 2021/10/27 13:38:28 by rmonney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*dest;
	int		n;

	n = 0;
	while (src[n] != '\0')
		n ++;
	dest = malloc(sizeof(*dest) * n + 1);
	if (!dest)
		return (NULL);
	n = 0;
	while (src[n] != '\0')
	{
		dest[n] = src[n];
		n ++;
	}
	dest[n] = '\0';
	return (dest);
}
/*
int main()
{
	printf("%s\n", ft_strdup("kew kew"));
	printf("%s\n", strdup("kew kew"));
	return (0);
}*/
