# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fbarrier <fbarrier@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/10 13:11:00 by fbarrier          #+#    #+#              #
#    Updated: 2022/01/11 19:23:20 by fbarrier         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SOURCES =	main.c \
			fill_pile.c \
			find_index.c \
			ft_error.c \
			ft_sort_three.c \
			ft_sort_four.c \
			ft_radix.c \
			op_r.c \
			op_rr.c \
			op_s.c \
			op_p.c \
			ft_atol.c \
			utils_pushswap_1.c \
			ft_free.c

OBJS = $(SOURCES:.c=.o)

CC = gcc 
CFLAGS = -Wall -Wextra -Werror -fsanitize=address -fsanitize=undefined -fsanitize=leak -g3

LIBNAME = push_swap.a
NAME = push_swap
HEADER = pushswap.h

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}
	
$(NAME): $(OBJS)
		${CC} ${CFLAGS} -o $(NAME) $(OBJS)
		
all: $(NAME)

clean:
	rm -f $(OBJS)
	
fclean: clean
	rm -f $(NAME) 

re: fclean all

.PHONY: all clean fclean re