
name = app

flags = -Wall -Werror -Wextra

srcs = srcs/*.c

objs = srcs/*.o

headers = includes/

libs = .. .

include = -I$(libft) -L$(libft) -lft



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
