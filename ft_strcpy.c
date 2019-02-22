
#include "libft.h"

char	*strcpy(char *dest, const char *src)
{
	int i;

	i = 0;
	if (ft_strlen(dest) != ft_strlen(src))
		return (0);
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
