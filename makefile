# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahammout <ahammout@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/13 16:42:44 by ahammout          #+#    #+#              #
#    Updated: 2022/06/11 22:39:52 by ahammout         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

CFLAGS = -Wall -Wextra -Werror

LIB = mandatory/push_swap.h

BLIB = bonus/checker.h

NAME = push_swap

SRCS = 	mandatory/main.c \
		mandatory/parsing_args.c \
		mandatory/utils.c \
		mandatory/utils_2.c \
		mandatory/ft_split.c \
		mandatory/ft_strjoin.c \
		mandatory/push_swap.c \
		mandatory/push.c \
		mandatory/swap.c \
		mandatory/retate.c \
		mandatory/reverse_retate.c \
		mandatory/sort_algo.c \
		mandatory/sort_five_nbrs.c \
		mandatory/sort_three_nbrs.c \

BSRCS = bonus/main.c \
		bonus/checker_parser.c \
		bonus/checker_utils.c \
		bonus/checker.c \
		bonus/push.c \
		bonus/swap.c \
		bonus/retate.c \
		bonus/reverse_retate.c \
		bonus/ft_split.c \
		bonus/ft_strjoin.c \

GNLINE = bonus/get_next_line/get_next_line.a

OBJS = $(SRCS:.c=.o)

BOBJS = $(BSRCS:.c=.o)

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@ 

all : $(NAME)

$(NAME) : $(OBJS) $(LIB)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean :
	@rm -rf $(OBJS)

fclean : clean
	@rm -rf $(NAME)

re : fclean all

bonus : $(BOBJS) $(BLIB)
	@make -C bonus/get_next_line
	@$(CC) $(CFLAGS) $(GNLINE) $(BSRCS) -o checker

clean_b :
	@rm -rf $(BOBJS)
	@make fclean -C bonus/get_next_line

fclean_b : clean_b
	@rm -rf checker

re_b : fclean_b bonus