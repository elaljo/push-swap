/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_err.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelalj <moelalj@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 00:08:13 by moelalj           #+#    #+#             */
/*   Updated: 2023/04/18 00:08:14 by moelalj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_double_sign(char **stack_str, t_data *data)
{
	int	i;
	int	j;

	i = 0;
	while (stack_str[i])
	{
		j = 0;
		while (stack_str[i][j])
		{
			if (ft_double_sign(stack_str[i]) == 1)
				j++;
			else
			{
				ft_putstr_fd("Error\n", 2);
				free(data->stack_a);
				free(data->stardnums);
				ft_free(stack_str);
				exit(1);
			}
		}
		i++;
	}
}

int	ft_double_sign(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '-' || str[i] == '+')
	{
		i++;
		if (str[i] == '-' || str[i] == '+')
			return (0);
	}
	return (1);
}

void	check_only_numbers(char **stack_str, t_data *data)
{
	int	i;
	int	j;

	i = 0;
	while (stack_str[i])
	{
		j = 0;
		while (stack_str[i][j])
		{
			if (ft_isdigit(stack_str[i][j]) == 1)
				j++;
			else
			{
				ft_putstr_fd("Error\n", 2);
				free(data->stack_a);
				free(data->stardnums);
				ft_free(stack_str);
				exit(1);
			}
		}
		i++;
	}
}

void	check_sign_after_number(char **stack_str, t_data *data)
{
	int	i;
	int	j;

	i = 0;
	while (stack_str[i])
	{
		j = 0;
		while (stack_str[i][j])
		{
			if (sign_after_number(stack_str[i]) == 1)
				j++;
			else
			{
				ft_putstr_fd("Error\n", 2);
				free(data->stack_a);
				free(data->stardnums);
				ft_free(stack_str);
				exit(1);
			}
		}
		i++;
	}
}

int	sign_after_number(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_isdigit(str[i]))
			i++;
		if (str[i] == '-' || str[i] == '+')
			return (0);
	}
	return (1);
}
