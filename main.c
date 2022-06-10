/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 13:14:38 by ahammout          #+#    #+#             */
/*   Updated: 2022/05/11 13:25:37 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

int	main(int ac, char **av)
{
	t_stacks	stacks;

	parsing_args(ac, av, &stacks);
	push_swap(&stacks);
	free(stacks.stack_a.arr);
	free(stacks.stack_b.arr);
	return (0);
}
