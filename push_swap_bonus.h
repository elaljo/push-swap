/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelalj <moelalj@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 15:42:06 by moelalj           #+#    #+#             */
/*   Updated: 2023/05/12 15:42:07 by moelalj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

# include <unistd.h>
# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1024
# endif

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

long		ft_atoi_long(char *str);
size_t		ft_strlen(const char *s);
void		org_arguments(char **argv, t_data *data);
void		convert_stackstr_to_stackarr(t_data *data);
int			deja_sorted(t_data *data);
void		check_err_stack_str(char **stack_str, t_data *data);
void		sort_em(t_data *data);
void		check_if_valid_rule(t_data *data, char *rule);
void		init_stack(t_data *data);
void		free_a_b(t_data *data);
void		ft_free(char **arr);
void		print_and_exit_free(t_data *data, char *rule);
void		ft_putchar(char c);
void		ft_putnbr(int nb);
char		*ft_strjoin(char *s1, char *s2);
void		ft_putstr_fd(char *s, int fd);
char		*ft_strcpy(char *dst, char *src);
int			ft_isdigit(char c);
int			count_words(char const *s, char delimiter);
int			count_chars(char const *s, char delimiter, int lens);
char		**ft_split(char const *s, char c);
char		*ft_substr(char const *str, unsigned int start, size_t len);
char		*ft_strdup(const char *str);
void		*ft_calloc(size_t count, size_t size);
void		ft_bzero(void *s, size_t n);
int			ft_strcmp(const char *s1, const char *s2);
void		sa(t_data *data);
void		sb(t_data *data);
void		ss(t_data *data);
void		pa(t_data *data);
void		pb(t_data *data);
void		ra(t_data *data);
void		rb(t_data *data);
void		rr(t_data *data);
void		rra(t_data *data);
void		rrb(t_data *data);
void		rrr(t_data *data);
char		*copy_to_xyata(char *str);
char		*cut(char *str);
char		*ft_read(char *all, int fd);
char		*get_next_line(int fd);
char		*ft_strchr(const char *s, int c);
void		check_empty_arg(char **argv);
void		check_only_spaces(char **argv);
void		check_double_sign(char **stack_str, t_data *data);
int			ft_double_sign(char *str);
void		check_only_numbers(char **stack_str, t_data *data);
void		check_sign_after_number(char **stack_str, t_data *data);
int			sign_after_number(char *str);
void		check_duplicate_num(t_data *data);
void		check_only_sign_nothing_else(char **stack_str, t_data *data);
int			only_sign(char *str);
void		check_max_min(char **stack_str, t_data *data);

#endif