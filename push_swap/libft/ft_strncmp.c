/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonney <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 18:00:37 by rmonney           #+#    #+#             */
/*   Updated: 2021/10/26 15:26:59 by rmonney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	unsigned char	*cs1;
	unsigned char	*cs2;
	unsigned int	i;

	cs1 = (unsigned char *)s1;
	cs2 = (unsigned char *)s2;
	i = 0;
	while (cs1[i] == cs2[i] && cs1[i] != '\0' && cs2[i] != '\0' && n > 1)
	{
		i ++;
		n --;
	}
	if (n == 0)
		return (0);
	return (cs1[i] - cs2[i]);
}
/*
int main()
{
	printf("%d\n", ft_strncmp("AAbss", "AAbff", 3));
	printf("%d\n", strncmp("AAbss", "AAbff", 3));
}*/
