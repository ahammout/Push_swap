/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <ahammout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 12:12:31 by ahammout          #+#    #+#             */
/*   Updated: 2022/06/11 21:04:03 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include<stdio.h>
# include<stdlib.h>
# include<unistd.h>

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
char	*ft_strchr(const char *s, int c);
char	**ft_split(char const *s, char c);
char	*ft_strjoin(char *s1, char *s2);
int		ft_strcmp(char *s1, char *s2);
void	exit_error(t_stacks *stacks, int num);
void	parsing_args(int ac, char **av, t_stacks *stacks);
void	push_swap(t_stacks *stacks);
void	swap_a_or_b(t_stacks *stacks, char *str);
void	retate_a_or_b(t_stacks *stacks, char *action);
void	reverse_retate_a_or_b(t_stacks *stacks, char *action);
void	push_a_or_b(t_stacks *stacks, char *action);
int		issorted(t_stacks *stacks);
void	sort_three_numbers(t_stacks *stacks);
int		find_smallest_num(t_stacks *stacks);
void	sort_five_numbers(t_stacks *stacks);
void	sort_arr(t_stacks *stacks, int *arr);
void	sort_algo(t_stacks *stacks);
int		find_largest_num(t_stacks *stacks);
void	*ft_calloc(size_t count, size_t size);

#endif
