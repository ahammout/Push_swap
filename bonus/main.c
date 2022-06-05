/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 10:55:59 by ahammout          #+#    #+#             */
/*   Updated: 2022/05/30 10:56:00 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"checker.h"

int main(int ac, char **av)
{
    t_stacks    stacks;
    char        *instr;
    int i = 0;

    instr = malloc(sizeof(char));
    parsing_args(ac, av, &stacks);
    while((instr = get_next_line(0)) != NULL)
    {
        if (ft_strcmp(instr, "\n"))
            check_exec_instr(&stacks, instr);
    }
    checker(&stacks);
    i = stacks.stack_a.top;
    while (i >= 0)
    {
        printf("Stack_a ==> %d\n", stacks.stack_a.arr[i]);
        i--;
    }
}