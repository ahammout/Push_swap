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

static int ft_get_mid_number(t_stacks *stacks)
{
    int *arr;
    int tmp;
    int mid_val;
    int i;
    int j;

    arr = malloc(stacks->stack_a.top * sizeof(int));
    i = 0;
    while (i <= stacks->stack_a.top)
    {
        arr[i] = stacks->stack_a.arr[i];
        i++;
    }
    i = 0;
    while(i <= stacks->stack_a.top)
    {
        j = i + 1;
        while (j <= stacks->stack_a.top)
        {
            if (arr[i] > arr[j])
            {
                tmp = arr[j];
                arr[j] = arr[i];
                arr[i] = tmp;
            }
            j++;
        }
        i++;
    }
    j = (stacks->stack_a.top + 1) / 2;
    mid_val = arr[j];
    free(arr);
    return (mid_val);
}

void    ft_sort_algo(t_stacks *stacks)
{
    int mid_value;
    int top;
    int i;

    i = 0;
    top = stacks->stack_a.top / 2;
    // look for less than mid value
    while (1)
    {
        mid_value = ft_get_mid_number(stacks);
        i++;
        printf("MID VALUE FOR CHUNK[%d]===>:%d\n",i , mid_value);
        while (top >= 0)
        {
            if (stacks->stack_a.arr[stacks->stack_a.top] < mid_value)
                ft_push_a_or_b(stacks, "pb");
            else
                ft_retate_a_or_b(stacks, "ra");
            top--;
        }
        top = stacks->stack_a.top / 2;
        if (stacks->stack_a.top == 2 && ft_issorted(stacks) == 0)
            ft_sort_three_numbers(stacks);
        if (stacks->stack_a.top == 2)
            break;
    }
    i = 0;
    while (i <= stacks->stack_b.top)
    {
        printf("stack_b ===> %d\n", stacks->stack_b.arr[i]);
        i++;
    }
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