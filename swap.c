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

void	swap(int *n1, int *n2)
{
	int	tmp;

	tmp = *n1;
	*n1 = *n2;
	*n2 = tmp;
}

void	swap_a_or_b(t_stacks *stacks, char *action)
{
	int	top_a;
	int	top_b;

	top_a = stacks->stack_a.top;
	top_b = stacks->stack_b.top;
	if (ft_strcmp(action, "sa") == 0)
	{
		swap(&stacks->stack_a.arr[top_a], &stacks->stack_a.arr[top_a - 1]);
		write(1, "sa\n", 3);
	}
	if (ft_strcmp(action, "sb") == 0)
	{
		swap(&stacks->stack_b.arr[top_b], &stacks->stack_b.arr[top_b - 1]);
		write(1, "sb\n", 3);
	}
	if (ft_strcmp(action, "ss") == 0)
	{
		swap(&stacks->stack_a.arr[top_a], &stacks->stack_a.arr[top_a - 1]);
		swap(&stacks->stack_b.arr[top_b], &stacks->stack_b.arr[top_b - 1]);
		write(1, "ss\n", 3);
	}
}
