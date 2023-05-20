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
	range_500(data);
	find_biggest_number_in_stack_b(data);
	push_biggest_num_to_a(data);
	free(data->stack_a_copy);
}

void	range_500(t_data *data)
{
	int	top;
	int	i;
	int	range;

	range = 39;
	i = 0;
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
		else if (top > data->stack_a_copy[i] && top < data->stack_a_copy[range])
		{
			pb(data);
			i++;
			range++;
		}
		else
			ra(data);
	}
}
