/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelalj <moelalj@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 09:42:25 by moelalj           #+#    #+#             */
/*   Updated: 2023/04/07 09:42:26 by moelalj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

# define INT_MAX 2147483647
# define INT_MIN -2147483648

typedef struct s_data
{
	int		*stack_a;
	int		*stack_b;
	int		stack_a_size;
	int		stack_b_size;
	int		*stack_a_copy;
	int		l_i_a;
	int		l_i_b;
	int		lowest_value_index;
	char	*stardnums;
}				t_data;

char	**ft_split(char const *s, char c);
int		count_chars(char const *s, char delimiter, int lens);
int		count_words(char const *s, char delimiter);
char	*ft_substr(char const *str, unsigned int start, size_t len);
char	*ft_strdup(const char *str);
void	*ft_calloc(size_t count, size_t size);
void	ft_bzero(void *s, size_t n);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strcpy(char *dst, char *src);
long	ft_atoi_long(char *str);
size_t	ft_strlen(const char *s);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_putstr_fd(char *s, int fd);
int		ft_isdigit(char c);
void	org_arguments(char **argv, t_data *data);
void	convert_stackstr_to_stackarr(t_data *data);
void	check_err_stack_str(char **stack_str, t_data *data);
void	ft_free(char **arr);
void	init_stack(t_data *data);
void	free_a_b(t_data *data);
void	check_double_sign(char **stack_str, t_data *data);
int		ft_double_sign(char *str);
void	check_only_numbers(char **stack_str, t_data *data);
void	check_sign_after_number(char **stack_str, t_data *data);
int		sign_after_number(char *str);
void	check_only_sign_nothing_else(char **stack_str, t_data *data);
int		only_sign(char *str);
void	check_empty_arg(char **argv);
void	check_only_spaces(char **argv);
void	check_duplicate_num(t_data *data);
void	check_max_min(char **stack_str, t_data *data);
void	sa(t_data *data);
void	sb(t_data *data);
void	ss(t_data *data);
void	pa(t_data *data);
void	pb(t_data *data);
void	ra(t_data *data);
void	rb(t_data *data);
void	rr(t_data *data);
void	rra(t_data *data);
void	rrb(t_data *data);
void	rrr(t_data *data);
int		deja_sorted(t_data *data);
void	start_sorting(t_data *data);
void	sort_2(t_data *data);
void	sort_3(t_data *data);
void	case_1(t_data *data);
void	case_2(t_data *data);
void	case_3(t_data *data);
void	case_4(t_data *data);
void	case_5(t_data *data);
void	find_lowest_number_in_stack(t_data *data);
void	sort_4(t_data *data);
void	first_2_index_cases(t_data *data);
void	last_2_index_cases(t_data *data);
void	sort_5(t_data *data);
void	first_3index_cases(t_data *data);
void	last_2index_cases(t_data *data);
void	sort_100(t_data *data);
void	init_copy_stack_a(t_data *data);
void	sort_the_copy(t_data *data);
void	swap_num(int num, int to_cmp_num, t_data *data);
void	range_100(t_data *data);
int		find_biggest_number_in_stack_b(t_data *data);
void	push_biggest_num_to_a(t_data *data);
void	sort_500(t_data *data);
void	range_500(t_data *data);

#endif