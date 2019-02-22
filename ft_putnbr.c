
#include "libft.h"

void	ft_putnbr(int nb)
{
	char c;

	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (nb > 9)
		ft_putnbr(nb / 10);
	c = (nb % 10) + '0';
	ft_putchar(c);
}
