/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonney <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 18:50:44 by rmonney           #+#    #+#             */
/*   Updated: 2021/10/27 13:36:31 by rmonney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void			*ptr;
	char			*ptc;
	unsigned long	a;

	a = 0;
	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	ptc = (char *)ptr;
	while (a < (count * size))
	{
		ptc[a] = '\0';
		a ++;
	}
	return (ptr);
}
/*
int main()
{
	void	*i = ft_calloc(3, sizeof(int));
	void	*s = calloc(3, sizeof(int));

	assert(i != NULL);
	assert(s != NULL);
	printf("%d\n", memcmp(i, s, 3 * sizeof(char)));
	return (0);
}*/
