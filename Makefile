
NAME = libft.a

SRCS = srcs/*.c

HEADERS = includes/*.h

OBJ = *.o

all: $(NAME)

$(NAME): 
	gcc -I $(HEADER) -c $(SRCS)
	ar rv $(OBJ)
	ranlib $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
