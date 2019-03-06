
#include "libft.h"

int	ft_memcmp(void *s1, void *s2, size_t n)
{
	size_t		i;
	int		diff;
	unsigned char	*a;
	unsigned char	*b;

	i = 0;
	a = s1;
	b = s2;
	diff = 0;
	while (i < n && diff == 0)
	{
		diff = (int) (a[i] - b[i]);
		i++;
	}
	return (diff);
}
