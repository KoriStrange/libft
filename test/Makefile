
name = app

flags = -Wall -Werror -Wextra

srcs = t*.c

objs = t*.o

lib = libtest.a

libft = -I.. -L.. -lft

libtest = -I. -L. -ltest


all: $(name)

$(name):
	make -C ..
	gcc $(libft) -c $(srcs) $(flags)
	ar rcs $(lib) $(objs)
	gcc -o $(name) main.c $(libtest) $(libft) $(flags)


clean:
	rm -f $(objs)

fclean: clean
	rm -f $(lib) $(name)
	make fclean -C ..

re: fclean all
