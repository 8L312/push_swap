/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonney <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 15:10:16 by rmonney           #+#    #+#             */
/*   Updated: 2022/01/20 21:59:17 by rmonney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <stdio.h>
# include "libft/libft.h"

typedef struct s_var {
	int	stacka[666];
	int	stackb[666];
	int	lena;
	int	lenb;
	int	i;
	int	trans;
	int	move;
	int	mode;
	int	small;
	int	mid;
	int	big;
	int	dist_s;
	int	dist_m;
	int	dist_b;
	int	sh;
	int	mh;
	int	bh;
}	t_var;

void	stackwriter(t_var *var);
int		verif_1arg(char *arg);
int		verif_args(char **argv);
void	init_swap_one(char *arg, t_var *var);
void	init_swap_mul(char **arg, t_var *var);
int		numberizer(char *arg, int i, int j);
int		onlynum(char *arg);
int		onlynum_1(char *arg, int i);
int		nodouble(int list[666], int x);
int		sizeverif(char *arg, int i, int j);
int		onlynum2(char *arg);
int		sizeverif2(char *arg);
void	p_swap(t_var *var);
void	sa(t_var *var, int a);
void	sb(t_var *var, int a);
void	ss(t_var *var);
void	pa(t_var *var);
void	pb(t_var *var);
void	ra(t_var *var, int a);
void	rb(t_var *var, int a);
void	rr(t_var *var);
void	rra(t_var *var, int a);
void	rrb(t_var *var, int a);
void	rrr(t_var *var);
int		stack_check(t_var *var);
void	beforemove(t_var *var);
void	aftermove(t_var *var);
void	needsortout(void);
void	stacksorted(void);
void	stack_cpy(t_var *var, t_var *algx);
void	stack_simple(t_var *var, t_var *algx);
void	algo_choose(t_var *var);
int		smallest_a(t_var *var, int index);
int		smallest_b(t_var *var, int index);
int		biggest_a(t_var *var, int index);
int		biggest_b(t_var *var, int index);
int		search_small_a(t_var *var);
int		search_small_b(t_var *var);
int		search_big_a(t_var *var);
int		search_big_b(t_var *var);
int		search_2nd_big(t_var *var, int max);
int		search_mid_a(t_var *var);
int		search_small_rangea(t_var *var, int min, int max);
int		search_small_rangeb(t_var *var, int min, int max);
int		where_is_a(t_var *var, int n);
int		where_is_b(t_var *var, int n);
int		who_near(t_var *var);
void	who_near_1(t_var *var);
int		whonear_sb_b(t_var *var);
void	whonear_sb_b_1(t_var *var);
int		whonear_sb_a(t_var *var);
void	whonear_sb_a_1(t_var *var);
void	algofor3(t_var *var);
void	algofor5(t_var *var);
void	algofor5_1(t_var *var);
void	algofor5_2(t_var *var);
void	algofor5_3(t_var *var);
void	algo1(t_var *var);
void	algo2(t_var *var);
void	algo2_1(t_var *var);
void	algo2_2(t_var *var);
void	algo3(t_var *var);
void	algo3_1(t_var *var);
void	algo3_2(t_var *var);
void	algo4(t_var *var);
void	algo4_1(t_var *var);
void	algo4_2(t_var *var);
void	algo4_3(t_var *var);
void	algo4_4(t_var *var);
void	algo4_5(t_var *var);
void	algo5(t_var *var);
void	algo5_1(t_var *var);
void	algo5_2(t_var *var);
void	algo5_3(t_var *var);
void	algo5_4(t_var *var);
void	algo5_5(t_var *var);
void	algo5_6(t_var *var);
void	algo5_7(t_var *var);
void	algo5_8(t_var *var);
void	algo5_9(t_var *var);

#endif
