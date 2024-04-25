/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <ahammout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 21:10:58 by ahammout          #+#    #+#             */
/*   Updated: 2022/06/11 21:25:32 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

int	find_largest_num(t_stacks *stacks)
{
	int	i;
	int	max;
	int	index;

	i = 1;
	max = stacks->stack_b.arr[0];
	index = 0;
	while (i <= stacks->stack_b.top)
	{
		if (max < stacks->stack_b.arr[i])
		{
			max = stacks->stack_b.arr[i];
			index = i;
		}
		i++;
	}
	return (index);
}

void	ft_bzero(void *s, size_t n)

{
	unsigned char	*ptr;

	ptr = s;
	while (n-- > 0)
		*ptr++ = '\0';
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = (void *)malloc(count * size);
	if (ptr == NULL)
		return (ptr);
	ft_bzero(ptr, count * size);
	return (ptr);
}
