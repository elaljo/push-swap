/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extra.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelalj <moelalj@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 18:01:30 by moelalj           #+#    #+#             */
/*   Updated: 2023/05/18 18:01:31 by moelalj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_a_b(t_data *data)
{
	free(data->stack_a);
	free(data->stack_b);
}

void	init_stack(t_data *data)
{
	data->stack_a = 0;
	data->stack_b = 0;
	data->stack_b_size = 0;
	data->stack_a_size = 0;
	data->stack_a_copy = 0;
	data->l_i_a = 0;
	data->l_i_b = 0;
	data->lowest_value_index = 0;
	data->stardnums = NULL;
}

void	ft_free(char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}
