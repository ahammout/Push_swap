/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 17:33:42 by ahammout          #+#    #+#             */
/*   Updated: 2022/05/09 19:08:45 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void    ft_swap(int *n1, int *n2)
{
    int *tmp;

    tmp = n1;
    n1 = n2;
    n2 = tmp;

 }

void	ft_swap_a(t_stacks *stacks)
{
    int index;

    index = stacks->stack_a.top;
    ft_swap(&stacks->stack_a.arr[index], &stacks->stack_a.arr[index - 1]);
}


