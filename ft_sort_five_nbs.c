/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_five_nbs.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 11:32:28 by ahammout          #+#    #+#             */
/*   Updated: 2022/05/15 11:32:32 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

int ft_find_smallest_num(t_stacks *stacks)
{
    int i;
    int min;
    int index;

    i = 0;
    min = stacks->stack_a.arr[0];
    while(i <= stacks->stack_a.top)
    {
        if (min > stacks->stack_a.arr[i])
        {
            min = stacks->stack_a.arr[i];
            index = i;
        }
        i++;
    }
    return (index);
}

void    ft_small_up(t_stacks *stacks)
{
    int smallest_index;
    int top;
    
    top = stacks->stack_a.top;
    smallest_index = ft_find_smallest_num(stacks);
    if(smallest_index < 3)
    {
        while (smallest_index >= 0)
        {
            ft_reverse_retate_a_or_b(stacks, "rra");
            smallest_index--;
        }
    }
    else
    {
        while (smallest_index < stacks->stack_a.top)
        {
            ft_retate_a_or_b(stacks, "ra");
            smallest_index++;
        }
    }
}

void    ft_sort_five_numbers(t_stacks *stacks)
{
    int i;

    i = 0;
    if (stacks->stack_a.top == 4)
    {
        ft_small_up(stacks);
        ft_push_a_or_b(stacks, "pb");
        i++;
    }
    if (stacks->stack_a.top == 3)
    {
        ft_small_up(stacks);
        ft_push_a_or_b(stacks, "pb");
        i++;
    }
    ft_sort_three_numbers(stacks);
    while(i > 0)
    {
        ft_push_a_or_b(stacks, "pa");
        i--;
    }
}
