
name = libft.a

flags = -Wall -Werror -Wextra

srcs = ft_strlen.c ft_strdup.c ft_strcpy.c ft_strncpy.c ft_isalpha.c ft_isdigit.c \
      ft_isalnum.c ft_toupper.c ft_tolower.c ft_strcmp.c ft_strncmp.c ft_atoi.c \
      ft_memset.c ft_bzero.c ft_strcat.c ft_strncat.c ft_strchr.c ft_strrchr.c \
      ft_strstr.c ft_strnstr.c ft_isascii.c ft_isprint.c ft_putchar.c ft_putstr.c ft_putnbr.c 

objs = ft_strlen.o ft_strdup.o ft_strcpy.o ft_strncpy.o ft_isalpha.o ft_isdigit.o \
      ft_isalnum.o ft_toupper.o ft_tolower.o ft_strcmp.o ft_strncmp.o ft_atoi.o \
      ft_memset.o ft_bzero.o ft_strcat.o ft_strncat.o ft_strchr.o ft_strrchr.o \
      ft_strstr.o ft_strnstr.o ft_isascii.o ft_isprint.o ft_putchar.o ft_putstr.o ft_putnbr.o

all: $(name)

$(name):
	gcc -I. -c $(srcs) $(flags)
	ar rcs $(name) $(objs)

clean:
	rm -f $(objs)

fclean: clean
	rm -f $(name)

re: fclean all
