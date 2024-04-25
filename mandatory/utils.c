/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <ahammout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 12:13:00 by ahammout          #+#    #+#             */
/*   Updated: 2022/06/11 21:14:31 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	sort_arr(t_stacks *stacks, int *arr)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	j = 0;
	while (i <= stacks->stack_a.top)
	{
		j = i + 1;
		while (j <= stacks->stack_a.top)
		{
			if (arr[i] > arr[j])
			{
				tmp = arr[j];
				arr[j] = arr[i];
				arr[i] = tmp;
			}
			j++;
		}
		i++;
	}
}

void	exit_error( t_stacks *stacks, int num)
{
	if (num == 0)
	{
		write(2, "Error\n", 6);
		exit(EXIT_FAILURE);
	}
	if (num == 1)
	{
		free(stacks->stack_a.arr);
		write(2, "Error\n", 6);
		exit (EXIT_FAILURE);
	}
	if (num == 2)
	{
		free(stacks->stack_a.arr);
		free(stacks->stack_b.arr);
		write(2, "Error\n", 6);
		exit (EXIT_FAILURE);
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 == *s2)
		return (0);
	else
		return (*s1 - *s2);
}

long	ft_atoi(char *str)
{
	int		sign;
	long	num;

	sign = 1;
	num = 0;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str ++;
	if (*str == '-')
		sign *= -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		num = (num * 10) + (*str - '0');
		str++;
	}
	return (num * sign);
}
