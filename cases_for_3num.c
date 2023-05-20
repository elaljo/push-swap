/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cases_for_3num.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelalj <moelalj@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 15:51:41 by moelalj           #+#    #+#             */
/*   Updated: 2023/05/05 19:12:17 by moelalj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	case_1(t_data *data)
{
	if ((data->stack_a[0] > data->stack_a[1])
		&& (data->stack_a[1] < data->stack_a[2])
		&& (data->stack_a[0] < data->stack_a[2]))
		sa(data);
}

void	case_2(t_data *data)
{
	if ((data->stack_a[0] > data->stack_a[1])
		&& (data->stack_a[1] > data->stack_a[2])
		&& (data->stack_a[0] > data->stack_a[2]))
	{
		sa(data);
		rra(data);
	}
}

void	case_3(t_data *data)
{
	if ((data->stack_a[0] > data->stack_a[1])
		&& data->stack_a[1] < data->stack_a[2]
		&& data->stack_a[0] > data->stack_a[2])
		ra(data);
}

void	case_4(t_data *data)
{
	if ((data->stack_a[0] < data->stack_a[1])
		&& (data->stack_a[1] > data->stack_a[2])
		&& (data->stack_a[0] < data->stack_a[2]))
	{
		sa(data);
		ra(data);
	}
}

void	case_5(t_data *data)
{
	if ((data->stack_a[0] < data->stack_a[1])
		&& (data->stack_a[1] > data->stack_a[2])
		&& (data->stack_a[0] > data->stack_a[2]))
		rra(data);
}
