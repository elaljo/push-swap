/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   middle_sorting.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelalj <moelalj@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 15:57:11 by moelalj           #+#    #+#             */
/*   Updated: 2023/05/08 16:03:52 by moelalj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_100(t_data *data)
{
	init_copy_stack_a(data);
	sort_the_copy(data);
	range_100(data, 19, 0);
	find_biggest_number_in_stack_b(data);
	push_biggest_num_to_a(data);
	free(data->stack_a_copy);
}

void	init_copy_stack_a(t_data *data)
{
	int	i;

	data->stack_a_copy = malloc(sizeof(int) * data->stack_a_size);
	i = 0;
	while (i < data->stack_a_size)
	{
		data->stack_a_copy[i] = data->stack_a[i];
		i++;
	}
}

void	range_100(t_data *data, int range, int i)
{
	int	top;
	int	size;

	size = data->stack_a_size;
	while (data->stack_a_size)
	{
		top = data->stack_a[0];
		if (top <= data->stack_a_copy[i])
		{
			pb(data);
			rb(data);
			i++;
			range++;
		}
		else if (top > data->stack_a_copy[i]
			&& check_r(top, data->stack_a_copy, range, size))
		{
			pb(data);
			i++;
			range++;
		}
		else
			ra(data);
	}
}

int	find_biggest_number_in_stack_b(t_data *data)
{
	int	i;
	int	tmp;
	int	highest_value_index;

	highest_value_index = 0;
	tmp = INT_MIN;
	i = 0;
	while (i < data->stack_b_size)
	{
		if (tmp < data->stack_b[i])
		{
			tmp = data->stack_b[i];
			highest_value_index = i;
		}
		i++;
	}
	return (highest_value_index);
}

void	push_biggest_num_to_a(t_data *data)
{
	int	highest_value;

	highest_value = 0;
	while (data->stack_b_size)
	{
		highest_value = find_biggest_number_in_stack_b(data);
		if (highest_value <= data->stack_b_size / 2)
			while (find_biggest_number_in_stack_b(data) != 0)
				rb(data);
		else
			while (find_biggest_number_in_stack_b(data) != 0)
				rrb(data);
		pa(data);
	}
}
