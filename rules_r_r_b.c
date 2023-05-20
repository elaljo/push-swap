/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_r_r_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelalj <moelalj@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 23:23:24 by moelalj           #+#    #+#             */
/*   Updated: 2023/05/16 23:23:25 by moelalj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	rra(t_data *data)
{
	int	tmp;
	int	i;
	int	last_index_a;

	last_index_a = data->stack_a_size - 1;
	tmp = data->stack_a[last_index_a];
	i = 0;
	while (i < data->stack_a_size - 1)
	{
		data->stack_a[last_index_a] = data->stack_a[last_index_a - 1];
		last_index_a--;
		i++;
	}
	data->stack_a[0] = tmp;
}

void	rrb(t_data *data)
{
	int	tmp;
	int	i;
	int	last_index_b;

	last_index_b = data->stack_b_size - 1;
	tmp = data->stack_b[last_index_b];
	i = 0;
	while (i < data->stack_b_size - 1)
	{
		data->stack_b[last_index_b] = data->stack_b[last_index_b - 1];
		last_index_b--;
		i++;
	}
	data->stack_b[0] = tmp;
}

void	rrr(t_data *data)
{
	rra(data);
	rrb(data);
}
