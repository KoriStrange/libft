#include "libtest.h"
#include "libft.h"

void	t_strcmp(char *s, char *t)
{
	if (s && t)
		ft_putstr("ft_strcmp: ");
	ft_putstr(s);
	if (ft_strcmp(s, t) > 0)
		ft_putstr(" is more than ");
	else if (ft_strcmp(s, t) < 0)
		ft_putstr(" is less than ");
	else if (ft_strcmp(s, t) == 0)
		ft_putstr(" is equal to ");
	ft_putstr(t);
	ft_putstr("\n\n");
}

