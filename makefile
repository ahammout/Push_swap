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

BLIB = bonus/checker.h

NAME = push_swap

SRCS = 	main.c \
		parsing_args.c \
		utils.c \
		ft_split.c \
		ft_strjoin.c \
		push_swap.c \
		push.c \
		swap.c \
		retate.c \
		reverse_retate.c \
		sort_algo.c \
		sort_five_nbrs.c \
		sort_three_nbrs.c \

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

all : $(NAME)

$(NAME) : $(OBJS) $(LIB)
	@$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

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