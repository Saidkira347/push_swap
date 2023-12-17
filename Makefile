# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: souhanat <souhanat@student.1337.ma >         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/23 15:52:03 by souhanat           #+#    #+#              #
#    Updated: 2023/06/21 15:17:13 by souhanat          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRCS = push_swap.c ft_strlen.c ft_isdigit.c ft_atoi.c ft_split.c  ft_strjoin.c\
 read_arg_to_check_errors.c check_duplicated.c converte_arr_to_int_and_check_another_errors.c \
 ft_size.c rules_part_one.c rules_part_two.c rules_part_three.c range.c range_part_two.c range_part_three.c sort_five.c range_five_hundred.c read_arg_to_check_errors_part_two.c
OBJS = $(SRCS:.c=.o)

CC = cc

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME) : $(OBJS)
	$(CC) $(OBJS) -o $(NAME)


clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY = all clean fclean re