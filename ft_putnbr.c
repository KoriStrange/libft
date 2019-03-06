
#include "libft.h"

void	ft_putnbr(int n)
{
	char c;

	if (n < 0)
	{
		ft_putchar('-');
		n *= -1;
	}
	if (n > 9)
		ft_putnbr(n / 10);
	c = (n % 10) + '0';
	ft_putchar(c);
}
