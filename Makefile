
name = libft.a

flags = -Wall -Werror -Wextra -I. -c

srcs = ft_strlen.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_toupper.c \
       ft_tolower.c ft_atoi.c ft_isascii.c ft_isprint.c ft_putchar.c \
       ft_putstr.c ft_putnbr.c

obj = ft_strlen.o ft_isalpha.o ft_isdigit.o ft_isalnum.o ft_toupper.o \
       ft_tolower.o ft_atoi.o ft_isascii.o ft_isprint.o ft_putchar.o \
       ft_putstr.o ft_putnbr.o

all: $(name)

$(name): $(obj)
	ar rcs $(name) $(obj)

$(obj): $(srcs)
	gcc $(flags) $(srcs)

clean:
	rm -f $(obj)

fclean: clean
	rm -f $(name)
	rm -f *.h.*

re: fclean all
