
NAME = libft.a

FLAGS = -Wall -Werror -Wextra

SRCS = ft*.c

OBJS = ft*.o


all: $(NAME)

$(NAME):
	gcc -I. -c $(SRCS) $(FLAGS)
	ar rcs $(NAME) $(OBJS)
clean:
	rm -f $(OBJS) $(NAME)

fclean: clean

re: fclean all
