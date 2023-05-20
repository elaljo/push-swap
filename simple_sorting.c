/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple_sorting.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelalj <moelalj@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 15:01:09 by moelalj           #+#    #+#             */
/*   Updated: 2023/05/08 16:01:50 by moelalj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	deja_sorted(t_data *data)
{
	int	i;

	i = 0;
	while (i < data->stack_a_size - 1)
	{
		if (data->stack_a[i] > data->stack_a[i + 1])
			return (1);
		i++;
	}
	return (0);
}

void	sort_2(t_data *data)
{
	if (data->stack_a[0] > data->stack_a[1])
		sa(data);
}

void	sort_3(t_data *data)
{
	case_1(data);
	case_2(data);
	case_3(data);
	case_4(data);
	case_5(data);
}

void	sort_4(t_data *data)
{
	find_lowest_number_in_stack(data);
	first_2_index_cases(data);
	last_2_index_cases(data);
}

void	sort_5(t_data *data)
{
	find_lowest_number_in_stack(data);
	first_3index_cases(data);
	last_2index_cases(data);
	sort_4(data);
	pa(data);
}
