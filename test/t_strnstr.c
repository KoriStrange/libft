
#include "libtest.h"
#include "libft.h"

void	t_strnstr(char *s, char *f, size_t n)
{
	if (s && f && n)
		ft_putstr("ft_strnstr: ");
	ft_putstr(s);
	ft_putstr(" ");
	ft_putstr(f);
	ft_putstr(" ");
	ft_putstr(ft_strnstr(s, f, n));
	ft_putstr("\n\n");
}
