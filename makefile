# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahammout <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/13 16:42:44 by ahammout          #+#    #+#              #
#    Updated: 2022/05/13 16:42:46 by ahammout         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

CFLAGS = -Wall -Wextra -Werror

LIB = push_swap.h

NAME = push_swap

SRCS = main.c parsing_args.c utils.c ft_split.c ft_strjoin.c ft_push_swap.c ft_swap.c ft_retate.c ft_reverse_retate.c ft_push.c ft_sort_algo_2.c ft_sort_five_nbs.c ft_sort_three_numbers.c

OBJS = $(SRCS:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS) $(LIB)
	@$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean :
	@rm -rf $(OBJS)

fclean : clean
	@rm -rf $(NAME)

re : fclean all
