/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_algo.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 16:41:12 by ahammout          #+#    #+#             */
/*   Updated: 2022/05/13 16:41:13 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void    ft_large_up(t_stacks *stacks)
{
    int largest_index;

    largest_index = ft_find_largest_num(stacks);
    if(largest_index < 3)
    {
        while (largest_index >= 0)
        {
            ft_reverse_retate_a_or_b(stacks, "rra");
            largest_index--;
        }
    }
    else
    {
        while (largest_index < stacks->stack_a.top)
        {
            ft_retate_a_or_b(stacks, "ra");
            largest_index++;
        }
    }
}

void    ft_sort_five_numbers(t_stacks *stacks)
{
    int i;

    i = 0;
    ft_large_up(stacks);
    
}

void    ft_sort_three_numbers(t_stacks *stacks)
{
    int *tmp;

    tmp = stacks->stack_a.arr;
    // 3 2 1
    if (tmp[2] > tmp[1] && tmp[1] > tmp[0] && tmp[0] < tmp[2])
    {
        ft_swap_a_or_b(stacks, "sa");
        ft_reverse_retate_a_or_b(stacks, "rra");
    }
    // 3 1 2
    if (tmp[2] > tmp[1] && tmp[1] < tmp[0] && tmp[0] < tmp[2])
        ft_retate_a_or_b(stacks, "ra");
    // 2 3 1
    if (tmp[2] < tmp[1] && tmp[1] > tmp[0] && tmp[0] < tmp[2])
        ft_reverse_retate_a_or_b(stacks, "rra");
    // 2 1 3
    if (tmp[2] > tmp[1] && tmp[1] < tmp[0] && tmp[0] > tmp[2])
        ft_swap_a_or_b(stacks, "sa");
    // 1 3 2
    if (tmp[2] < tmp[1] && tmp[1] > tmp[0] && tmp[0] > tmp[2])
    {
        ft_swap_a_or_b(stacks, "sa");
        ft_retate_a_or_b(stacks, "ra");
    }
}