
#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t n)
{
	size_t ld;
	size_t ls;

	ld = ft_strlen(dest);
	ls = ft_strlen(src);
	if (ld >= n)
		return (ls + n);
	dest += ld;
	while (*src && n-- > ld + 1)
		*dest++ = *src++;
	*dest = '\0';
	return (ld + ls);
}
