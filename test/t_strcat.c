
#include "libtest.h"
#include "libft.h"

void	t_strcat(char *s, char *t)
{
	if (s && t)
		ft_putstr("ft_strcat: ");
	ft_putstr(s);
	ft_putstr(" ");
	ft_putstr(t);
	ft_putstr(" ");
	ft_putstr(ft_strcat(s, t));
	ft_putstr("\n\n");
}
