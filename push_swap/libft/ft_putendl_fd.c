/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonney <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 16:07:27 by rmonney           #+#    #+#             */
/*   Updated: 2021/10/25 18:38:23 by rmonney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (s && fd)
	{
		while (s[i] != '\0')
		{
			write(fd, &s[i], 1);
			i ++;
		}
		write(fd, &"\n", 1);
	}
}
/*
int main()
{
	ft_putendl_fd("juuudas", 1);
	return (0);
}*/
