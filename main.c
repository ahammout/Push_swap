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

int main(int ac, char **av)
{
    t_stacks stacks;
    int i;

    (void) ac;
    stacks.action = 0;
    ft_parsing_args(ac, av, &stacks);
    ft_push_swap(&stacks);

    i = stacks.stack_a.top;
    // while(i >= 0)
    // {
    //     printf("%d\n", stacks.stack_a.arr[i]);
    //     i--;
    // }
    printf("ALL THE ACTIONS ==> %d\n", stacks.action);
    //printf("stack_b[1]==> %d\nstack_b[0]==>%d\n ", stacks.stack_b.arr[1], stacks.stack_b.arr[0]);
    return(0);
}
