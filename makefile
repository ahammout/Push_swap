CC = gcc

CFLAGS = -Wall -Wextra -Werror

LIB = push_swap.h

NAME = push_swap

SRCS = main.c parsing_args.c utils.c ft_split.c ft_strjoin.c ft_push_swap.c ft_swap.c ft_retate.c ft_reverse_retate.c

OBJS = $(SRCS:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS) $(LIB)
	@$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean :
	@rm -rf $(OBJS)

fclean : clean
	@rm -rf $(NAME)

re : fclean all