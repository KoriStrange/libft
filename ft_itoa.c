
#include "libft.h"

char	*ft_straddi(char *a, int c)
{
	int	i;
	char	*b;

	i = ft_strlen(a);
	b = ft_strnew(i + 2);
	ft_strcpy(b, a);
	b[i] = (c % 10) + '0';
	ft_strdel(&a);
	return (b);
}

char	*ft_itoa(int n)
{
	char *a;

	a = ft_strnew(1);
	if (n > 9)
		ft_itoa(n / 10);
	ft_straddi(a, n);
	return (a);
}
