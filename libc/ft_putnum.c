
#include "libft.h"

void	ft_putnum(int nb)
{
	char a;

	if (nb > 9)
		ft_putnum(nb / 10);
	a = (nb % 10) + 48;
	ft_putchar(a);
}
