
#include "libft.h"
#include "libtest.h"

void	t_strncpy(char *s, size_t n)
{
//	char *a;
//	char *b;

//	a = strncpy(a, s, n);
//	b = ft_strncpy(a, s, n);
	if (s && n)
		ft_putstr("ft_strncpy: size(");
	ft_putnbr((int) n);
	ft_putstr(") strncpy = ");
//	ft_putstr(a);
	ft_putstr(" ft_strncpy = ");
//	ft_putstr(b);
	ft_putstr("\n\n");
}
