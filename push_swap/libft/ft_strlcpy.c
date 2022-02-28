/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonney <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 18:36:52 by rmonney           #+#    #+#             */
/*   Updated: 2021/10/26 16:10:50 by rmonney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;
	unsigned int	c;

	c = 0;
	i = 0;
	while (i < (dstsize - 1) && src[i] != '\0' && dstsize != 0)
	{
		dst[i] = src[i];
		i ++;
		c ++;
	}
	if (dstsize != 0)
		dst[i] = '\0';
	while (src[i] != '\0')
	{
		c ++;
		i ++;
	}
	return (c);
}
/*
int main()
{
	char dst[999] = "LOL";
	char dst2[999] = "LOL";
	char src[999] = "KEWaaa\0 alo";

	printf("ft_strlcpy : %zu\n", ft_strlcpy(dst, src, 0));
	printf("%s\n\n\n", dst);
	printf("strlcpy : %zu\n", strlcpy(dst2, src, 0));
	printf("%s\n", dst2);
	return (0);
}*/
