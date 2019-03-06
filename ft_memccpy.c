
#include "libft.h"

void	*ft_memccpy(void *dest, void *src, int c, size_t n)
{
	size_t	i;
	char	*d;
	char	*s;

	i = 0;
	d = dest;
	s = src;
	while (i < n)
	{
		d[i] = s[i];
		i++;
		if (s[i - 1] == (char) c)
			return (dest + i);
	}
	return (NULL);
}
