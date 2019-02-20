
name = libft.a

flags = -Wall -Werror -Wextra -I. -c

srcs = *.c

obj = *.o

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
