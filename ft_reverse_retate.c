/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_retate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 16:41:02 by ahammout          #+#    #+#             */
/*   Updated: 2022/05/13 16:41:04 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void    ft_shift_down(t_stack *stack, int top, int bottom_tmp)
{
    int i;

    i = 0;
    while(i <= top)
    {
        if (i == top)
        {
            stack->arr[top] = bottom_tmp;
            break;
        }
        stack->arr[i] = stack->arr[i + 1];
        i++;
    }
}

void    ft_reverse_retate_a_or_b(t_stacks *stacks, char *action)
{
    int bottom_a;
    int bottom_b;

    bottom_a = stacks->stack_a.arr[0];
    bottom_b = stacks->stack_b.arr[0];
    if (ft_strcmp(action, "rra") == 0)
    {
        ft_shift_down(&stacks->stack_a, stacks->stack_a.top, bottom_a);
        write(1, "rra\n", 4);
        stacks->action++;
    }
    if (ft_strcmp(action, "rrb") == 0)
    {
        ft_shift_down(&stacks->stack_b, stacks->stack_a.top, bottom_b);
        write(1, "rrb\n", 4);
        stacks->action++;
    }
    if (ft_strcmp(action, "rrr") == 0)
    {
        ft_shift_down(&stacks->stack_a, stacks->stack_a.top, bottom_a);
        ft_shift_down(&stacks->stack_b, stacks->stack_a.top, bottom_b);
        write(1, "rrr\n", 4);
        stacks->action++;
    }
}
