/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 16:41:32 by ahammout          #+#    #+#             */
/*   Updated: 2022/05/13 16:41:39 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"checker.h"

void	push(t_stacks *stacks, char stack)
{
	int	top_a;
	int	top_b;

	top_a = stacks->stack_a.top;
	top_b = stacks->stack_b.top;
	if (stack == 'a')
	{
		stacks->stack_a.arr[top_a + 1] = stacks->stack_b.arr[top_b];
		stacks->stack_b.top--;
		stacks->stack_a.top++;
	}
	if (stack == 'b')
	{
		stacks->stack_b.arr[top_b + 1] = stacks->stack_a.arr[top_a];
		stacks->stack_a.top--;
		stacks->stack_b.top++;
	}
}

void	push_a_or_b(t_stacks *stacks, char *action)
{
	if (ft_strcmp(action, "pa") == 0)
		push(stacks, 'a');
	if (ft_strcmp(action, "pb") == 0)
		push(stacks, 'b');
}
