/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   advance_sorting.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelalj <moelalj@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 18:11:40 by moelalj           #+#    #+#             */
/*   Updated: 2023/05/11 18:11:41 by moelalj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_500(t_data *data)
{
	init_copy_stack_a(data);
	sort_the_copy(data);
	range_500(data, 39, 0);
	find_biggest_number_in_stack_b(data);
	push_biggest_num_to_a(data);
	free(data->stack_a_copy);
}

void	range_500(t_data *data, int range, int i)
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
			range++;
			i++;
		}
		else if (top > data->stack_a_copy[i]
			&& check_r(top, data->stack_a_copy, range, size))
		{
			pb(data);
			range++;
			i++;
		}
		else
			ra(data);
	}
}

int	check_r(int top, int *stack_a_copy, int range, int size)
{
	if (range > size)
		range = size - 1;
	if (top < stack_a_copy[range])
		return (1);
	return (0);
}
