/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelalj <moelalj@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 21:54:38 by moelalj           #+#    #+#             */
/*   Updated: 2023/05/12 22:19:15 by moelalj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	org_arguments(char **argv, t_data *data)
{
	char	**split_arg;
	int		i;
	int		j;

	data->stack_a_size = 0;
	i = 0;
	while (argv[++i])
	{
		split_arg = ft_split(argv[i], ' ');
		j = -1;
		while (split_arg[++j])
		{
			data->stack_a_size++;
			data->stardnums = ft_strjoin(data->stardnums, split_arg[j]);
			free(split_arg[j]);
			data->stardnums = ft_strjoin(data->stardnums, " ");
		}
		free(split_arg);
	}
	convert_stackstr_to_stackarr(data);
}

void	convert_stackstr_to_stackarr(t_data *data)
{
	char	**stack_str;
	int		i;

	data->stack_a = malloc(sizeof(int) * data->stack_a_size);
	stack_str = ft_split(data->stardnums, ' ');
	i = -1;
	while (++i < data->stack_a_size)
	{
		check_err_stack_str(stack_str, data);
		data->stack_a[i] = ft_atoi_long(stack_str[i]);
	}
	ft_free(stack_str);
	free(data->stardnums);
	check_duplicate_num(data);
	data->stack_b = malloc(sizeof(int) * data->stack_a_size);
	if (deja_sorted(data) == 1)
		sort_em(data);
	else
	{
		free_a_b(data);
		exit (0);
	}
}

void	sort_em(t_data *data)
{
	char	*str;
	int		size;

	str = 0;
	size = data->stack_a_size;
	while (1)
	{
		str = get_next_line(0);
		if (str == NULL)
			break ;
		check_if_valid_rule(data, str);
		free(str);
	}
	if (deja_sorted(data) == 0 && data->stack_a_size == size)
		ft_putstr_fd("OK\n", 1);
	else
		ft_putstr_fd("KO\n", 1);
	free_a_b(data);
	exit (0);
}

void	check_err_stack_str(char **stack_str, t_data *data)
{
	check_max_min(stack_str, data);
	check_only_numbers(stack_str, data);
	check_double_sign(stack_str, data);
	check_sign_after_number(stack_str, data);
	check_only_sign_nothing_else(stack_str, data);
}

int	main(int argc, char *argv[])
{
	t_data	data;

	if (argc > 1)
	{
		check_empty_arg(argv);
		check_only_spaces(argv);
		init_stack(&data);
		org_arguments(argv, &data);
	}
	return (0);
}
