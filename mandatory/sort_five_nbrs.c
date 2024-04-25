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

int	find_smallest_num(t_stacks *stacks)
{
	int	i;
	int	min;
	int	index;

	i = 0;
	min = stacks->stack_a.arr[0];
	index = 0;
	while (i <= stacks->stack_a.top)
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

void	small_up(t_stacks *stacks)
{
	int	smallest_index;

	smallest_index = find_smallest_num(stacks);
	if (smallest_index < 3)
	{
		while (smallest_index >= 0)
		{
			reverse_retate_a_or_b(stacks, "rra");
			smallest_index--;
		}
	}
	else
	{
		while (smallest_index < stacks->stack_a.top)
		{
			retate_a_or_b(stacks, "ra");
			smallest_index++;
		}
	}
}

void	sort_five_numbers(t_stacks *stacks)
{
	int	i;

	i = 0;
	if (stacks->stack_a.top == 4)
	{
		small_up(stacks);
		push_a_or_b(stacks, "pb");
		i++;
	}
	if (stacks->stack_a.top == 3)
	{
		small_up(stacks);
		push_a_or_b(stacks, "pb");
		i++;
	}
	sort_three_numbers(stacks);
	while (i > 0)
	{
		push_a_or_b(stacks, "pa");
		i--;
	}
}
