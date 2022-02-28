/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonney <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 16:25:36 by rmonney           #+#    #+#             */
/*   Updated: 2022/01/20 20:59:08 by rmonney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	init_swap_one(char *arg, t_var *var)
{
	int	i;
	int	j;

	i = 0;
	var->lena = 0;
	while (arg[i] != '\0')
	{
		j = i;
		while ((47 < arg[i] && arg[i] <= 57) || arg[i] == 45 || arg[i] == 43)
			i++;
		var->stacka[var->lena] = numberizer(arg, i, j);
		var->lena++;
		if (arg[i] == 32)
			i++;
	}
}

void	init_swap_mul(char **arg, t_var *var)
{
	var->lena = 1;
	while (arg[var->lena])
	{
		var->stacka[var->lena - 1] = ft_atoi(arg[var->lena]);
		var->lena++;
	}
	var->lena--;
}

void	p_swap(t_var *var)
{
	t_var	varc;

	stack_cpy(var, &varc);
	if (varc.lena <= 1)
		exit(0);
	else if (varc.lena == 2 && varc.stacka[0] > varc.stacka[1])
	{
		varc.mode = 1;
		sa(&varc, 1);
	}
	else if (varc.lena > 2)
	{
		if (!stack_check(&varc))
			algo_choose(&varc);
	}
}

int	main(int argc, char **argv)
{
	t_var	var;

	var.i = 0;
	if (argc <= 1)
		return (0);
	else if (argc == 2)
	{
		if (!verif_1arg(argv[1]))
		{
			write(2, "Error\n", 6);
			return (0);
		}
		init_swap_one(argv[1], &var);
	}
	else
	{
		if (!verif_args(argv))
		{
			write(2, "Error\n", 6);
			return (0);
		}
		init_swap_mul(argv, &var);
	}
	p_swap(&var);
	return (0);
}
