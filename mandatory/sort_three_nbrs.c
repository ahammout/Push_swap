/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_three_numbers.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 14:59:07 by ahammout          #+#    #+#             */
/*   Updated: 2022/05/19 14:59:09 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	sort_three_numbers(t_stacks *stacks)
{
	int	*tmp;

	tmp = stacks->stack_a.arr;
	if (tmp[2] > tmp[1] && tmp[1] > tmp[0] && tmp[0] < tmp[2])
	{
		swap_a_or_b(stacks, "sa");
		reverse_retate_a_or_b(stacks, "rra");
	}
	if (tmp[2] > tmp[1] && tmp[1] < tmp[0] && tmp[0] < tmp[2])
		retate_a_or_b(stacks, "ra");
	if (tmp[2] < tmp[1] && tmp[1] > tmp[0] && tmp[0] < tmp[2])
		reverse_retate_a_or_b(stacks, "rra");
	if (tmp[2] > tmp[1] && tmp[1] < tmp[0] && tmp[0] > tmp[2])
		swap_a_or_b(stacks, "sa");
	if (tmp[2] < tmp[1] && tmp[1] > tmp[0] && tmp[0] > tmp[2])
	{
		swap_a_or_b(stacks, "sa");
		retate_a_or_b(stacks, "ra");
	}
}
