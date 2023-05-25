/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelalj <moelalj@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 09:45:14 by moelalj           #+#    #+#             */
/*   Updated: 2023/04/07 09:45:18 by moelalj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	org_arguments(char **argv, t_data *data)
{
	char	**split_arg;
	int		i;
	int		j;

	i = 0;
	while (argv[++i])
	{
		split_arg = ft_split(argv[i], ' ');
		if (!split_arg)
			exit (1);
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
	{
		start_sorting(data);
		free_a_b(data);
	}
	else
		free_a_b(data);
}

void	start_sorting(t_data *data)
{
	if (data->stack_a_size == 2)
		sort_2(data);
	else if (data->stack_a_size == 3)
		sort_3(data);
	else if (data->stack_a_size == 4)
		sort_4(data);
	else if (data->stack_a_size == 5)
		sort_5(data);
	else if (data->stack_a_size > 5 && data->stack_a_size <= 100)
		sort_100(data);
	else if (data->stack_a_size > 100)
		sort_500(data);
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
