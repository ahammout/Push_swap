/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 17:36:04 by ahammout          #+#    #+#             */
/*   Updated: 2022/05/10 19:33:29 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

int ft_issorted(t_stacks *stacks)
{
    int top;

    top = stacks->stack_a.top;
    while (top > 0)
    {
        if (stacks->stack_a.arr[top] > stacks->stack_a.arr[top - 1])
            return (0);
        top--;
    }
    return (1);
}

void	ft_push_swap(t_stacks *stacks)
{
    stacks->stack_b.arr = malloc ((stacks->stack_a.top) * sizeof(int));
    if (!stacks->stack_b.arr)
        ft_exit_error(stacks, 2);
    stacks->stack_b.top = -1;

    if (ft_issorted(stacks))
         exit(1);
    if (stacks->stack_a.top == 1)
         ft_swap_a_or_b(stacks, "sa");
    if (stacks->stack_a.top == 2)
        ft_sort_three_numbers(stacks);
    if (stacks->stack_a.top < 5)
        ft_sort_five_numbers(stacks);
    if (stacks->stack_a.top >= 5)
        ft_sort_algo(stacks);
}