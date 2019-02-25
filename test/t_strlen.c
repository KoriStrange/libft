
#include "libtest.h"
#include "libft.h"

void	t_strlen(char *s)
{
	int	n;

	n = ft_strlen(s);
	ft_putstr("ft_strlen: ");
	ft_putstr(s);
	ft_putstr(" = ");
	ft_putnbr(n);
	ft_putstr("\n\n");
}
