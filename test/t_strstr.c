
#include "libtest.h"
#include "libft.h"

void	t_strstr(char *s, char *f)
{
	if (s && f)
		ft_putstr("ft_strstr: ");
	ft_putstr(s);
	ft_putstr(" ");
	ft_putstr(f);
	ft_putstr(" ");
	ft_putstr(ft_strstr(s, f));
	ft_putstr("\n\n");
}
