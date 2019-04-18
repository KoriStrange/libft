
#include "libft.h"

char	*ft_itoa(int n)
{
	unsigned int	num;
	int		x;
	char		*i;

	if (n < 0)
	{
		num = -n;
		x = 2;
	}
	else
	{
		num = n;
		x = 1;
	}
	while (num /= 10)
		x++;
	if (!(i = ft_strnew(x)))
		return (NULL);
	if (n < 0)
	{
		num = -n;
		i[0] = '-';
	}
	else
	{
		num = n;
		i[0] = '0';
	}
	while (num)
	{
		i[--x] = num % 10 + '0';
		num /= 10;
	}
	return (i);
}
