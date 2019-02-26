
#include "libtest.h"
#include "libft.h"

void	t_strrchr(char *s, char a)
{
	if (s && a)
		ft_putstr("ft_strrchr: ");
	ft_putstr(s);
	ft_putstr(" ");
	ft_putchar(a);
	ft_putstr(" ");
	ft_putstr(ft_strrchr(s, a));
	ft_putstr("\n\n");
}
