
#include "libtest.h"
#include "libft.h"

void	t_strchr(char *s, char a)
{
	if (s && a)
		ft_putstr("ft_strchr: ");
	ft_putstr(s);
	ft_putstr(" ");
	ft_putchar(a);
	ft_putstr(" ");
	ft_putstr(ft_strchr(s, a));
	ft_putstr("\n\n");
}
