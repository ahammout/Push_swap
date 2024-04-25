/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_algo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <ahammout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 16:41:12 by ahammout          #+#    #+#             */
/*   Updated: 2022/06/11 21:15:58 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

static void	transfer_stack_b(t_stacks *stacks)
{
	int	large_one;
	int	step;

	step = 0;
	while (1)
	{
		large_one = find_largest_num(stacks);
		if (large_one >= stacks->stack_b.top / 2)
		{
			step++;
			if (large_one == stacks->stack_b.top)
				push_a_or_b(stacks, "pa");
			else
				retate_a_or_b(stacks, "rb");
		}
		else if (large_one < stacks->stack_b.top / 2)
		{
			reverse_retate_a_or_b(stacks, "rrb");
			step++;
		}
		if (stacks->stack_b.top == -1)
			break ;
	}
}

static int	position_mid(t_stacks *stacks, int mid_value)
{
	int	i;

	i = 0;
	while (i <= stacks->stack_a.top)
	{
		if (stacks->stack_a.arr[i] < mid_value)
			return (i);
		i++;
	}
	return (0);
}

static int	mid_num(t_stacks *stacks, int div)
{
	int	*arr;
	int	mid_val;
	int	i;

	i = 0;
	arr = ft_calloc(sizeof(int), stacks->stack_a.top + 1);
	while (i <= stacks->stack_a.top)
	{
		arr[i] = stacks->stack_a.arr[i];
		i++;
	}
	sort_arr(stacks, arr);
	i = (stacks->stack_a.top + 1) / div;
	mid_val = arr[i];
	free (arr);
	return (mid_val);
}

void	transfer_stack_a(t_stacks *stacks, int mid_value)
{
	while (1)
	{
		if (stacks->stack_a.arr[stacks->stack_a.top] < mid_value)
			push_a_or_b(stacks, "pb");
		else
		{
			if (position_mid(stacks, mid_value) >= stacks->stack_a.top / 2)
				retate_a_or_b(stacks, "ra");
			else
				reverse_retate_a_or_b(stacks, "rra");
		}
		if (position_mid(stacks, mid_value) == 0)
			break ;
	}
}

void	sort_algo(t_stacks *stacks)
{
	int	mid_value;

	while (1)
	{
		if (stacks->stack_a.top < 200)
			mid_value = mid_num(stacks, 6);
		else
			mid_value = mid_num(stacks, 13);
		transfer_stack_a(stacks, mid_value);
		if (stacks->stack_a.top == 4)
		{
			sort_five_numbers(stacks);
			transfer_stack_b(stacks);
			break ;
		}
	}
}
