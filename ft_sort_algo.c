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

int ft_find_largest_num(t_stacks *stacks)
{
    int i;
    int max;
    int index;

    i = 1;
    max = stacks->stack_b.arr[0];
    index = 0;
    while(i <= stacks->stack_b.top)
    {
        if (max < stacks->stack_b.arr[i])
        {
            max = stacks->stack_b.arr[i];
            index = i;
        }
        i++;
    }
    return(index);
}

void    ft_transfer_stack_b(t_stacks *stacks)
{
    int largest_index;
    int count;
    int step;

    count = 0;
    step = 0;
    while (1)
    {
        largest_index = ft_find_largest_num(stacks);
        while (largest_index < stacks->stack_b.top)
        {
            ft_retate_a_or_b(stacks, "rb");
            step++;
            largest_index++;
            count++;
        }
        ft_push_a_or_b(stacks, "pa");
        while (count > 0)
        {
            ft_reverse_retate_a_or_b(stacks, "rrb");
            step++;
            count--;
        }
        if (stacks->stack_b.top == -1)
        {
            printf(" STEPS ===> %d\n", step);
            break;
        }
    }
}
    


static int ft_get_mid_number(t_stacks *stacks)
{
    int arr[stacks->stack_a.top];
    int mid_val;
    int i;

    i = 0;
    while (i <= stacks->stack_a.top)
    {
        arr[i] = stacks->stack_a.arr[i];
        i++;
    }
    ft_sort_arr(stacks, arr);
    i = (stacks->stack_a.top + 1) / 2;
    mid_val = arr[i];
    return (mid_val);
}

void    ft_sort_algo(t_stacks *stacks)
{
    int mid_value;
    int top;

    while (1)
    {
        top = stacks->stack_a.top;
        mid_value = ft_get_mid_number(stacks);
        while (top > 0)
        {
            if (stacks->stack_a.arr[stacks->stack_a.top] < mid_value)
                ft_push_a_or_b(stacks, "pb");
            else
                ft_retate_a_or_b(stacks, "ra");
            top--;
        }
        if (stacks->stack_a.top == 1)
        {
            if (ft_issorted(stacks) == 0)
                ft_swap_a_or_b(stacks, "sa");
            ft_transfer_stack_b(stacks);
            printf("HERE WE GO\n");
            break;
        }
    }
}