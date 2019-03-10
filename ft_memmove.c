
#include "libft.h"

void	*ft_memmove(void *dest, void *src, size_t n)
{
	size_t	i;
	
	i = -1;
	if (n == 0)
		return (dest);
	if (dest <= src)
	{
		while (++i < n)
			((char *) dest)[i] = ((char *) src)[i];
	}
	else
	{
		while (n-- > 0)
			((char *) dest)[n] = ((char *) src)[n];
	}
	return (dest);
}
