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

int	issorted(t_stacks *stacks)
{
	int	top;

	top = stacks->stack_a.top;
	while (top > 0)
	{
		if (stacks->stack_a.arr[top] > stacks->stack_a.arr[top - 1])
			return (0);
		top--;
	}
	return (1);
}

void	push_swap(t_stacks *stacks)
{
	if (issorted(stacks))
		exit(1);
	if (stacks->stack_a.top == 1)
		swap_a_or_b(stacks, "sa");
	if (stacks->stack_a.top == 2)
		sort_three_numbers(stacks);
	if (stacks->stack_a.top < 5)
		sort_five_numbers(stacks);
	if (stacks->stack_a.top >= 5)
		sort_algo(stacks);
}
