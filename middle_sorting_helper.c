/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   middle_sorting_helper.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelalj <moelalj@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 17:56:56 by moelalj           #+#    #+#             */
/*   Updated: 2023/05/11 17:56:57 by moelalj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_the_copy(t_data *data)
{
	int	i;

	i = 0;
	while (i < data->stack_a_size - 1)
	{
		if (data->stack_a_copy[i] > data->stack_a_copy[i + 1])
		{
			swap_num(i, i + 1, data);
			i = 0;
		}
		else
			i++;
	}
}

void	swap_num(int num, int to_cmp_num, t_data *data)
{
	int	tmp;

	tmp = data->stack_a_copy[num];
	data->stack_a_copy[num] = data->stack_a_copy[to_cmp_num];
	data->stack_a_copy[to_cmp_num] = tmp;
}
