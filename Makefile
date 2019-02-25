
name = libft.a

flags = -Wall -Werror -Wextra

srcs = ft_strlen.c ft_strdup.c ft_strcpy.c ft_strncpy.c ft_isalpha.c ft_isdigit.c \
      ft_isalnum.c ft_toupper.c ft_tolower.c ft_atoi.c ft_isascii.c ft_isprint.c \
     ft_putchar.c ft_putstr.c ft_putnbr.c 

objs = ft_strlen.o ft_strdup.o ft_strcpy.o ft_strncpy.o ft_isalpha.o ft_isdigit.o \
      ft_isalnum.o ft_toupper.o ft_tolower.o ft_atoi.o ft_isascii.o ft_isprint.o \
      ft_putchar.o ft_putstr.o ft_putnbr.o

all: $(name)

$(name):
	gcc -I. -c $(srcs) $(flags)
	ar rcs $(name) $(objs)

clean:
	rm -f $(objs)

fclean: clean
	rm -f $(name)

re: fclean all
