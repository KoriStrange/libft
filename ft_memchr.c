
#include "libft.h"

void	*ft_memchr(void *s, int c, size_t n)
{
	size_t		i;
	unsigned char	*a;

	i = 0;
	a = s;
	while (i < n)
	{
		if (a[i] == (unsigned char) c)
			return (s + i);
		i++;
	}
	return (NULL);
}
