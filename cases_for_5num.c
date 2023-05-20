/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cases_for_5num.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelalj <moelalj@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 19:29:49 by moelalj           #+#    #+#             */
/*   Updated: 2023/05/05 19:29:50 by moelalj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	first_3index_cases(t_data *data)
{
	if (data->lowest_value_index == 0)
		pb(data);
	else if (data->lowest_value_index == 1)
	{
		sa(data);
		pb(data);
	}
	else if (data->lowest_value_index == 2)
	{
		ra(data);
		ra(data);
		pb(data);
	}
}

void	last_2index_cases(t_data *data)
{
	if (data->lowest_value_index == 3)
	{
		rra(data);
		rra(data);
		pb(data);
	}
	else if (data->lowest_value_index == 4)
	{
		rra(data);
		pb(data);
	}
}
