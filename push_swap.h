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

long    ft_atoi(char *str);
char    *ft_strchr(const char *s, int c);
char	**ft_split(char const *s, char c);
char	*ft_strjoin(char *s1, char *s2);
void    ft_exit_error(t_stack *stack_a);
void    ft_parsing_args(int ac, char **av, t_stack *stack_a);
void	ft_algo(t_stack *stack_a, t_stack *stack_b);

# endif


