/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_helper.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelalj <moelalj@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 14:51:12 by moelalj           #+#    #+#             */
/*   Updated: 2023/05/18 19:27:31 by moelalj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

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

void	check_if_valid_rule(t_data *data, char *rule)
{
	if (ft_strcmp(rule, "sa\n") == 0)
		sa(data);
	else if (ft_strcmp(rule, "sb\n") == 0)
		sb(data);
	else if (ft_strcmp(rule, "ss\n") == 0)
		ss(data);
	else if (ft_strcmp(rule, "pa\n") == 0)
		pa(data);
	else if (ft_strcmp(rule, "pb\n") == 0)
		pb(data);
	else if (ft_strcmp(rule, "ra\n") == 0)
		ra(data);
	else if (ft_strcmp(rule, "rb\n") == 0)
		rb(data);
	else if (ft_strcmp(rule, "rr\n") == 0)
		rr(data);
	else if (ft_strcmp(rule, "rra\n") == 0)
		rra(data);
	else if (ft_strcmp(rule, "rrb\n") == 0)
		rrb(data);
	else if (ft_strcmp(rule, "rrr\n") == 0)
		rrr(data);
	else
		print_and_exit_free(data, rule);
}

void	print_and_exit_free(t_data *data, char *rule)
{
	ft_putstr_fd("Error\n", 2);
	free(rule);
	free_a_b(data);
	exit (1);
}
