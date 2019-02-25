
#include "libft.h"
#include "libtest.h"

void	t_atoi(char *s)
{
	if (s)
		ft_putstr("ft_atoi: ");
	ft_putnbr(ft_atoi(s));
	ft_putstr("\n\n");
}
