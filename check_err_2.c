/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_err_2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelalj <moelalj@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 01:30:08 by moelalj           #+#    #+#             */
/*   Updated: 2023/04/18 01:30:09 by moelalj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_only_sign_nothing_else(char **stack_str, t_data *data)
{
	int	i;
	int	j;

	i = 0;
	while (stack_str[i])
	{
		j = 0;
		while (stack_str[i][j])
		{
			if (only_sign(stack_str[i]) == 1)
				j++;
			else
			{
				ft_putstr_fd("Error\n", 2);
				free(data->stack_a);
				free(data->stardnums);
				ft_free(stack_str);
				exit (1);
			}
		}
		i++;
	}
}

int	only_sign(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '-' || str[i] == '+')
			i++;
		if (str[i] == '\0')
			return (0);
		i++;
	}
	return (1);
}

void	check_only_spaces(char **argv)
{
	int	i;
	int	j;
	int	l;

	i = 1;
	while (argv[i])
	{
		j = 0;
		l = 0;
		while (argv[i][j])
		{
			if (argv[i][j] != ' ')
				l++;
			j++;
		}
		if (l == 0)
		{
			ft_putstr_fd("Error\n", 2);
			exit (1);
		}
		i++;
	}
}

void	check_empty_arg(char **argv)
{
	int	i;

	i = 1;
	while (argv[i])
	{
		if (argv[i][0] == 0)
		{
			ft_putstr_fd("Error\n", 2);
			exit (1);
		}
		i++;
	}
}

void	check_max_min(char **stack_str, t_data *data)
{
	int	i;

	i = 0;
	while (stack_str[i])
	{
		if (ft_atoi_long(stack_str[i]) > INT_MAX)
		{
			ft_putstr_fd("Error\n", 2);
			free(data->stack_a);
			ft_free(stack_str);
			free(data->stardnums);
			exit (1);
		}
		if (ft_atoi_long(stack_str[i]) < INT_MIN)
		{
			ft_putstr_fd("Error\n", 2);
			free(data->stack_a);
			free(data->stardnums);
			ft_free(stack_str);
			exit (1);
		}
		i++;
	}
}
