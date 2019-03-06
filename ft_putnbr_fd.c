
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char a;

	if (n < 0)
	{
		ft_putchar('-');
		n *= -1;
	}
	if (n > 9)
		ft_putnbr_fd((n / 10), fd);
	a = (n % 10) + '0';
	ft_putchar_fd(a, fd);
}
