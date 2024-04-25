/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <ahammout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 13:29:36 by ahammout          #+#    #+#             */
/*   Updated: 2022/06/11 13:29:37 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include<unistd.h>
# include<stdio.h>
# include<stdlib.h>
# include"get_next_line/get_next_line.h"

typedef struct s_stack
{
	int	top;
	int	*arr;

}t_stack;

typedef struct s_stacks
{
	t_stack	stack_a;
	t_stack	stack_b;

}t_stacks;

long	ft_atoi(char *str);
char	**ft_split(char const *s, char c);
char	*ft_strjoin(char *s1, char *s2);
int		ft_strcmp(char *s1, char *s2);
void	exit_error(t_stacks *stacks, int num);
void	parsing_args(int ac, char **av, t_stacks *stacks);
void	push_a_or_b(t_stacks *stacks, char *action);
void	swap_a_or_b(t_stacks *stacks, char *action);
void	retate_a_or_b(t_stacks *stacks, char *action);
void	reverse_retate_a_or_b(t_stacks *stacks, char *action);
void	check_exec_instr(t_stacks *stacks, char *instr);
void	checker(t_stacks *stacks);

#endif
