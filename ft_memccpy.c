
#include "libft.h"

void	*ft_memccpy(void *dest, void *src, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *) dest)[i] = ((char *) src)[i];
		i++;
		if (((char *) src)[i - 1] == (char) c)
			return (dest + i);
	}
	return (NULL);
}
