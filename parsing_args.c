/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_args.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 12:11:24 by ahammout          #+#    #+#             */
/*   Updated: 2022/05/10 15:34:41 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	ft_duplicate(t_stack *stack_a)
{
	int	i;
	int j;

	i = 0;
	while (i < stack_a->top)
	{
		j = i + 1;
		while(j <= stack_a->top)
		{
			if(stack_a->arr[i] == stack_a->arr[j])
				ft_exit_error(stack_a);
			j++;
		}
		i++;
	}
}

void	ft_check_numbers(char **av, t_stack *stack_a)
{
	int 	i;
	int 	j;
	long	r;

	i = 0;
	while(av[i])
	{
		r = ft_atoi(av[i]);
		if(r > 2147483647 || r < -2147483648)
			ft_exit_error(stack_a);
		j = 0;
		while(av[i][j])
		{
			if (av[i][j] == '-')
				j++;
			if (!(av[i][j] >= '0' && av[i][j] <= '9'))
				ft_exit_error(stack_a);
			j++;
		}
		i++;
	}
}

void	to_int(char **args, t_stack *stack_a)
{
	int i;
	int t;

	i = 0;
	t = 0;
	while(args[t])
		t++;
	t--;      // For NULL;
	stack_a->top = t;
	while(t >= 0)
	{
		stack_a->arr[i] = ft_atoi(args[t]);
		i++;
		t--;
	}
	if(stack_a->top == -1)
        exit(EXIT_FAILURE);
}

char	**ft_fill_args(char **av)
{
	char	*str;
	char	**args;
	int 	i;

	i = 1;
	str = (char *)malloc(sizeof(char));
	while(av[i])
	{
		str = ft_strjoin(str, av[i]);
		i++;
	}
	args = ft_split(str, ' ');
	free(str);
	return(args);
}

void    ft_parsing_args(int ac, char **av, t_stack *stack_a)
{
	char	**args;

	stack_a->arr = malloc((ac - 1) * sizeof(int));
	if (!stack_a->arr)
		ft_exit_error(stack_a);
	stack_a->top = -1;
	args = ft_fill_args(av);
	ft_check_numbers(args, stack_a);
	to_int(args, stack_a);
	free(args);
	ft_duplicate(stack_a);
}
