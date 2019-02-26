
#include "libft.h"

char	*ft_strncat(char *dest, char *src, size_t n)
{
	int i;
	int j;

	i = ft_strlen(dest);
	j = 0;
	while (j < (int) n)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
