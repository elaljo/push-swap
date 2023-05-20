/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_rotate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelalj <moelalj@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 15:21:54 by moelalj           #+#    #+#             */
/*   Updated: 2023/05/03 15:28:52 by moelalj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_data *data)
{
	int	tmp;
	int	i;
	int	last_index_a;

	last_index_a = data->stack_a_size - 1;
	i = 0;
	tmp = data->stack_a[0];
	while (i < data->stack_a_size - 1)
	{
		data->stack_a[i] = data->stack_a[i + 1];
		i++;
	}
	data->stack_a[last_index_a] = tmp;
	ft_putstr_fd("ra\n", 1);
}

void	rb(t_data *data)
{
	int	tmp;
	int	i;
	int	last_index_b;

	last_index_b = data->stack_b_size - 1;
	tmp = data->stack_b[0];
	i = 0;
	while (i < data->stack_b_size - 1)
	{
		data->stack_b[i] = data->stack_b[i + 1];
		i++;
	}
	data->stack_b[last_index_b] = tmp;
	ft_putstr_fd("rb\n", 1);
}

void	rr(t_data *data)
{
	ra(data);
	rb(data);
	ft_putstr_fd("rr\n", 1);
}
