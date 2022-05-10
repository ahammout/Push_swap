/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 12:12:22 by ahammout          #+#    #+#             */
/*   Updated: 2022/05/09 12:12:24 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

int main(int ac, char **av)
{
    int i;
    t_stack stack_a;
    t_stack stack_b;

    i = 0;
    ft_parsing_args(ac, av, &stack_a);
    stack_b.arr = malloc()

    while(i <= stack_a.top)
    {
        printf("%d\n", stack_a.arr[i]);
        i++;
    }
    printf("top indice: %d\n", stack_a.top + 1);
    return(0);
}  
