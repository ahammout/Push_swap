/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_retate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 16:40:49 by ahammout          #+#    #+#             */
/*   Updated: 2022/05/13 16:40:52 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"checker.h"

void	shift_up(t_stack *stack, int top, int top_element)
{
	while (top >= 0)
	{
		if (top == 0)
		{
			stack->arr[top] = top_element;
			break ;
		}
		stack->arr[top] = stack->arr[top - 1];
		top--;
	}
}

void	retate_a_or_b(t_stacks *stacks, char *action)
{
	int	top_a;
	int	top_b;

	top_a = stacks->stack_a.arr[stacks->stack_a.top];
	top_b = stacks->stack_b.arr[stacks->stack_b.top];
	if (ft_strcmp(action, "ra") == 0)
		shift_up(&stacks->stack_a, stacks->stack_a.top, top_a);
	if (ft_strcmp(action, "rb") == 0)
		shift_up(&stacks->stack_b, stacks->stack_b.top, top_b);
	if (ft_strcmp(action, "rr") == 0)
	{
		shift_up(&stacks->stack_a, stacks->stack_a.top, top_a);
		shift_up(&stacks->stack_b, stacks->stack_b.top, top_b);
	}
}
