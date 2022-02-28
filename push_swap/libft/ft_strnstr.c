/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonney <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 16:10:36 by rmonney           #+#    #+#             */
/*   Updated: 2021/10/27 12:59:38 by rmonney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	cfinder(char *s, const char *t, size_t n)
{
	int	c;
	int	i;

	c = 0;
	i = 0;
	while (*s != '\0' && n != 0)
	{
		while (*s != *t && n != 0)
		{
			n --;
			s ++;
		}
		while (*s == *t && *t != '\0' && n != 0)
		{
			s ++;
			t ++;
			n --;
			i ++;
		}
		if (*t == '\0')
			c = 1;
		else
			t -= i;
	}
	return (c);
}

static int	afinder(char *s, const char *t, size_t n)
{
	int	a;

	a = 0;
	while (*s != '\0' && n != 0)
	{
		while (*s != *t && n != 0)
		{
			n --;
			s ++;
			a ++;
		}
		while (*s == *t && *t != '\0' && n != 0)
		{
			s ++;
			t ++;
			n --;
		}
		if (*t == '\0')
			n = 0;
	}
	return (a);
}

char	*ft_strnstr(const char *str, const char *tofind, size_t len)
{
	char			*strc;
	int				a;
	int				c;

	strc = (char *)str;
	a = 0;
	c = 0;
	if (*tofind == '\0')
		return (strc);
	c = cfinder(strc, tofind, len);
	a = afinder(strc, tofind, len);
	if (c == 1)
		return (strc + a);
	else
		return (NULL);
}
/*
int	main(void)
{
	char	*s;
	char	*t;

	s = "hellopigeonhella";
	t = "hella";
	printf("%s\n", ft_strnstr(s, t, 30));
	printf("%s\n", strnstr(s, t, 30));
	return (0);
}*/
