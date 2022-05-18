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

void	ft_duplicate(t_stacks *stacks)
{
	int	i;
	int j;

	i = 0;
	while (i < stacks->stack_a.top)
	{
		j = i + 1;
		while(j <= stacks->stack_a.top)
		{
			if(stacks->stack_a.arr[i] == stacks->stack_a.arr[j])
				ft_exit_error(stacks, 1);
			j++;
		}
		i++;
	}
}

void	to_int(char **args, t_stacks *stacks)
{
	int i;
	int size;

	i = 0;
	size = 0;
	while(args[size])
		size++;
	stacks->stack_a.arr = malloc((size) * sizeof(int));
	if (!stacks->stack_a.arr)
		ft_exit_error(stacks, 1);
	size--;      // For NULL;
	stacks->stack_a.top = size;
	while(size >= 0)
	{
		stacks->stack_a.arr[i] = ft_atoi(args[size]);
		i++;
		size--;
	}
	if(stacks->stack_a.top == -1)
        exit(EXIT_FAILURE);
}
// fixing bug here 2
void	ft_check_args(char **args)
{
	int 	i;
	int 	j;
	long	r;

	i = 0;
	while(args[i])
	{
		j = 0;
		while(args[i][j])
		{
			if (args[i][j] == '-')
				j++;
			if (!(args[i][j] >= '0' && args[i][j] <= '9'))
				ft_exit_error(NULL, 0);
			j++;
		}
		r = ft_atoi(args[i]);
		if(r > 2147483647 || r < -2147483648)
			ft_exit_error(NULL, 0);
		i++;
	}
}
// fixing bug here 1
char	**ft_fill_args(int ac, char **av)
{
	char	*str;
	char	**args;
	int 	i;

	i = 1;
	str = (char *)malloc(sizeof(char));
	if (!str)
		return(NULL);
	while(i < ac)
	{
		str = ft_strjoin(str, av[i]);
		i++;
	}
	args = (char **)malloc(sizeof(char *) * i);
	args = ft_split(str, ' ');
	free(str);
	return(args);
}

void    ft_parsing_args(int ac, char **av, t_stacks *stacks)
{
	char	**args;

	stacks->stack_a.top = -1;
	args = ft_fill_args(ac, av);
	ft_check_args(args);
 	to_int(args, stacks);
	free(args);
	ft_duplicate(stacks);
}
