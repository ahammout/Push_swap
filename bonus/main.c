/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <ahammout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 13:41:33 by ahammout          #+#    #+#             */
/*   Updated: 2022/06/11 13:42:16 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"checker.h"

int	main(int ac, char **av)
{
	t_stacks	stacks;
	char		*instr;

	instr = malloc(sizeof(char));
	parsing_args(ac, av, &stacks);
	instr = get_next_line(0);
	while (instr != NULL)
	{
		check_exec_instr(&stacks, instr);
		instr = get_next_line(0);
	}
	checker(&stacks);
}
