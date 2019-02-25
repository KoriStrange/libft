
#include "libft.h"
#include "libtest.h"

void	t_strdup(char *s)
{
	char *a;
	char *b;

	a = strdup(s);
	b = ft_strdup(s);
	ft_putstr("ft_strdup: ");
	ft_putstr("strdup = ");
	ft_putstr(a);
	ft_putstr(" ft_strdup = ");
	ft_putstr(b);
	ft_putstr("\n\n");
}
