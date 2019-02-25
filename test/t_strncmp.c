
#include "libtest.h"
#include "libft.h"

void	t_strncmp(char *s, char *t, size_t n)
{
	if (s && t && n)
		ft_putstr("ft_strnmp: ");
	ft_putstr("size(");
	ft_putnbr((int) n);
	ft_putstr(") ");
	ft_putstr(s);
	if (ft_strncmp(s, t, n) > 0)
		ft_putstr(" is more than ");
	else if (ft_strncmp(s, t, n) < 0)
		ft_putstr(" is less than ");
	else if (ft_strncmp(s, t, n) == 0)
		ft_putstr(" is equal to ");
	ft_putstr(t);
	ft_putstr("\n\n");
}

