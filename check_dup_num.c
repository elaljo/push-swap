/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_dup_num.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelalj <moelalj@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 14:33:35 by moelalj           #+#    #+#             */
/*   Updated: 2023/05/02 14:33:36 by moelalj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_duplicate_num(t_data *data)
{
	int	i;
	int	n;

	i = 0;
	while (i < data->stack_a_size - 1)
	{
		n = i + 1;
		while (n < data->stack_a_size)
		{
			if (data->stack_a[i] == data->stack_a[n])
			{
				ft_putstr_fd("Error\n", 2);
				free(data->stack_a);
				exit (1);
			}
			n++;
		}
		i++;
	}
}
