/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cases_for_4num.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelalj <moelalj@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 19:00:42 by moelalj           #+#    #+#             */
/*   Updated: 2023/05/05 19:14:04 by moelalj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	find_lowest_number_in_stack(t_data *data)
{
	int	i;
	int	tmp;

	data->lowest_value_index = 0;
	tmp = INT_MAX;
	i = 0;
	while (i < data->stack_a_size)
	{
		if (tmp > data->stack_a[i])
		{
			tmp = data->stack_a[i];
			data->lowest_value_index = i;
		}
		i++;
	}
}

void	first_2_index_cases(t_data *data)
{
	if (data->lowest_value_index == 0)
	{
		pb(data);
		sort_3(data);
		pa(data);
	}
	else if (data->lowest_value_index == 1)
	{
		sa(data);
		pb(data);
		sort_3(data);
		pa(data);
	}
}

void	last_2_index_cases(t_data *data)
{
	if (data->lowest_value_index == 2)
	{
		ra(data);
		ra(data);
		pb(data);
		sort_3(data);
		pa(data);
	}
	else if (data->lowest_value_index == 3)
	{
		rra(data);
		pb(data);
		sort_3(data);
		pa(data);
	}
}
