
name = app

flags = -Wall -Werror -Wextra

lib = ..

include = -I$(lib) -L$(lib) -lft $(flags)

srcs = main.c

objs = main.o

all: $(name)

$(name): 
	make -C $(lib)
	gcc -o $(name) $(srcs) $(include)

clean: 
	rm -f $(objs)

fclean: clean
	rm -f $(name)
	make fclean -C $(lib)

re: fclean all
