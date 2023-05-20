/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_switch_push.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelalj <moelalj@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 14:32:52 by moelalj           #+#    #+#             */
/*   Updated: 2023/05/03 15:28:02 by moelalj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_data *data)
{
	int	tmp;

	if (data->stack_a_size > 1)
	{
		tmp = 0;
		tmp = data->stack_a[0];
		data->stack_a[0] = data->stack_a[1];
		data->stack_a[1] = tmp;
		ft_putstr_fd("sa\n", 1);
	}
}

void	sb(t_data *data)
{
	int	tmp;

	if (data->stack_b_size > 1)
	{
		tmp = 0;
		tmp = data->stack_b[0];
		data->stack_b[0] = data->stack_b[1];
		data->stack_b[1] = tmp;
		ft_putstr_fd("sb\n", 1);
	}
}

void	ss(t_data *data)
{
	sa(data);
	sb(data);
	ft_putstr_fd("ss\n", 1);
}

void	pa(t_data *data)
{
	int	i;
	int	tmp;

	if (data->stack_b_size >= 1)
	{
		tmp = data->stack_b[0];
		data->stack_b_size--;
		i = 0;
		while (i < data->stack_b_size)
		{
			data->stack_b[i] = data->stack_b[i + 1];
			i++;
		}
		i = 0;
		data->l_i_a = data->stack_a_size;
		while (i < data->stack_a_size)
		{
			data->stack_a[data->l_i_a] = data->stack_a[data->l_i_a - 1];
			data->l_i_a--;
			i++;
		}
		data->stack_a[0] = tmp;
		data->stack_a_size++;
		ft_putstr_fd("pa\n", 1);
	}
}

void	pb(t_data *data)
{
	int	i;
	int	tmp;

	if (data->stack_a_size >= 1)
	{
		tmp = data->stack_a[0];
		data->stack_a_size--;
		i = 0;
		while (i < data->stack_a_size)
		{
			data->stack_a[i] = data->stack_a[i + 1];
			i++;
		}
		i = 0;
		data->l_i_b = data->stack_b_size;
		while (i < data->stack_b_size)
		{
			data->stack_b[data->l_i_b] = data->stack_b[data->l_i_b - 1];
			data->l_i_b--;
			i++;
		}
		data->stack_b[0] = tmp;
		data->stack_b_size++;
		ft_putstr_fd("pb\n", 1);
	}
}
