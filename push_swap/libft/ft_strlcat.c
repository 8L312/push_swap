/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonney <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 19:22:11 by rmonney           #+#    #+#             */
/*   Updated: 2021/10/26 19:15:27 by rmonney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	c;
	unsigned int	i;

	c = 0;
	i = 0;
	while (*dst++ != '\0' && dstsize != 0)
	{
		if (c < dstsize)
			c ++;
		i ++;
	}
	dst --;
	while (*src != '\0' && (i++) < (dstsize - 1) && dstsize != 0)
	{
		*dst++ = *src++;
		c ++;
	}
	if (dstsize != 0)
		*dst = '\0';
	while (*src++ != '\0')
		c ++;
	return (c);
}
/*
int main()
{
	char src[999] = "56789";
	char dst[999] = "1234";
	char dst2[999] = "1234";

	printf("ft_strlcat : %zu\n", ft_strlcat(dst, src, 0));
	printf("%s\n\n", dst);
	printf("strlcat : %zu\n", strlcat(dst2, src, 0));
	printf("%s\n", dst2);
	return (0);
}*/
