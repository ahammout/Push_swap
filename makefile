CC = gcc

CFLAGS = -Wall -Wextra -Werror

LIB = push_swap.h

NAME = push_swap

SRCS = push_swap.c parsing_args.c utils.c 

OBJS = $(SRCS:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS) $(LIB)
	@$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean :
	@rm -rf $(OBJS)

fclean : clean
	@rm -rf $(NAME)

re : fclean all