/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 12:12:31 by ahammout          #+#    #+#             */
/*   Updated: 2022/05/09 12:12:33 by ahammout         ###   ########.fr       */
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

long	    ft_atoi(char *str);
void    ft_exit_error(t_stack *stack_a);
void    ft_parsing_args(int ac, char **av, t_stack *stack_a);

# endif
