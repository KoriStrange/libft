
name = app

flags = -Wall -Werror -Wextra

lib = ..

include = -I$(lib) -L$(lib) -lft

srcs = main.c

objs = main.o

all: $(name)

$(name):
	make -C $(lib)
	gcc -o $(name) $(srcs) $(include) $(flags)

clean:
	rm -f $(objs)

fclean: clean
	rm -f $(name)
	make fclean -C $(lib)

re: fclean all
