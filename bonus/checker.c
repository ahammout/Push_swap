/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 10:56:07 by ahammout          #+#    #+#             */
/*   Updated: 2022/05/30 10:56:09 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"checker.h"

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

void	check_exec_instr(t_stacks *stacks, char *instr)
{
	if (ft_strcmp(instr, "sa\n") == 0)
		swap_a_or_b(stacks, "sa");
	else if (ft_strcmp(instr, "sb\n") == 0)
		swap_a_or_b(stacks, "sb");
	else if (ft_strcmp(instr, "ss\n") == 0)
		swap_a_or_b(stacks, "ss");
	else if (ft_strcmp(instr, "pa\n") == 0)
		push_a_or_b(stacks, "pa");
	else if (ft_strcmp(instr, "pb\n") == 0)
		push_a_or_b(stacks, "pb");
	else if (ft_strcmp(instr, "ra\n") == 0)
		retate_a_or_b(stacks, "ra");
	else if (ft_strcmp(instr, "rb\n") == 0)
		retate_a_or_b(stacks, "rb");
	else if (ft_strcmp(instr, "rr\n") == 0)
		retate_a_or_b(stacks, "rr");
	else if (ft_strcmp(instr, "rra\n") == 0)
		reverse_retate_a_or_b(stacks, "rra");
	else if (ft_strcmp(instr, "rrb\n") == 0)
		reverse_retate_a_or_b(stacks, "rrb");
	else if (ft_strcmp(instr, "rrr\n") == 0)
		reverse_retate_a_or_b(stacks, "rrr");
	else
		exit_error(stacks, 2);
}

void	checker(t_stacks *stacks)
{
	if (issorted(stacks) == 1)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
}
