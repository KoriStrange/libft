
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int c;

	c = n;
	if (n < 0)
	{
		c *= -1;
		ft_putchar_fd('-', fd);
	}       
	if (c > 9)
		ft_putnbr_fd((c / 10), fd);
	c = c % 10 + 48;
	ft_putchar_fd(c, fd);
}
