/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 12:12:31 by ahammout          #+#    #+#             */
/*   Updated: 2022/05/10 19:47:08 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

typedef struct s_stack
{
    int top;
    int *arr;

}t_stack; 

typedef struct s_stacks
{
    t_stack stack_a;
    t_stack stack_b;
    
} t_stacks;


long    ft_atoi(char *str);
char    *ft_strchr(const char *s, int c);
char	**ft_split(char const *s, char c);
char	*ft_strjoin(char *s1, char *s2);
int	    ft_strcmp(char *s1, char *s2);
void    ft_exit_error(t_stacks *stacks, int num);
void    ft_parsing_args(char **av, t_stacks *stacks);
void	ft_push_swap(t_stacks *stacks);
void	ft_swap_a_or_b(t_stacks *stacks, char *str);
void    ft_retate_a_or_b(t_stacks *stacks, char *action);
void    ft_reverse_retate_a_or_b(t_stacks *stacks, char *action);
void    ft_push_a_or_b(t_stacks *stacks, char *action);
int     ft_issorted(t_stacks *stacks);
void    ft_sort_three_numbers(t_stacks *stacks);
int     ft_find_largest_num(t_stacks *stacks);
void    ft_sort_five_numbers(t_stacks *stacks);

# endif


