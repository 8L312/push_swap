/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonney <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 11:33:05 by rmonney           #+#    #+#             */
/*   Updated: 2021/10/26 13:38:40 by rmonney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char		*dstc;
	const char	*srcc;

	if (dst == NULL && src == NULL)
		return (NULL);
	dstc = dst;
	srcc = src;
	if (dst <= src)
	{
		while (n > 0)
		{
			*dstc++ = *srcc++;
			n --;
		}
	}
	else
	{
		while (n > 0)
		{
			*(dstc + n - 1) = *(srcc + n - 1);
			n --;
		}
	}
	return (dst);
}
/*
int main()
{
//	char src[6] = "a\0a";
//	char dst[6] = "alo";
//	char dstc[6] = "alo";
	printf("ma fonction : %s\n", ft_memmove((void *)0, (void *)0, 6));
	printf("version officielle :  %s\n", memmove((void *)0, (void *)0, 6));
	return (0);
}
*/
/*
int main()
{
	char *src = "this is a good nyancat !\n";
	char dst1[0xF0];
	char dst2[0xF0];
	int size = strlen(src);

	printf("ft_memmove : %s\n", ft_memmove(dst1, src, size));
	printf("memmove : %s\n", memmove(dst2, src, size));
	return (0);
}*/
