NAME = push_swap

B_NAME = checker

CC = cc

CFLAGS = -Wall -Wextra -Werror

RM = rm -rf

CFILES = libft_needed.c\
	libft_needed_2.c\
	ft_split_helper.c\
	ft_split.c\
	check_err.c\
	check_err_2.c\
	check_dup_num.c\
	rules_swap_push.c\
	rules_rotate.c\
	rules_reverse_rotate.c\
	simple_sorting.c\
	cases_for_5num.c\
	cases_for_4num.c\
	cases_for_3num.c\
	middle_sorting.c\
	middle_sorting_helper.c\
	advance_sorting.c\
	extra.c\
	main.c

B_CFILES = main_bonus.c\
	libft_needed.c\
	libft_needed_2.c\
	ft_split.c\
	ft_split_helper.c\
	get_next_line.c\
	check_err.c\
	check_dup_num.c\
	check_err_2.c\
	bonus_helper.c\
	rules_r_r_b.c\
	rules_r_b.c\
	rules_s_p_b.c\
	extra.c
	
OBJ = ${CFILES:.c=.o}

B_OBJ = ${B_CFILES:.c=.o}

all : $(NAME)

bonus : $(B_NAME)

$(B_NAME) : $(B_OBJ)
	$(CC) $(CFLAGS) $^ -o $@

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $^ -o $@

clean :
	$(RM) $(OBJ) $(B_OBJ)

fclean : clean
	$(RM) $(NAME) $(B_NAME)

re : fclean all

.PHONY : all clean fclean re
