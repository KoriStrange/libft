
#include "libft.h"

char	*ft_strnew(size_t size)
{
	size_t	i;
	char	*a;

	i = 0;
	a = (char *) malloc(sizeof(char) * (size + 1));
	while (i < size)
	{
		a[i] = '\0';
		i++;
	}
	return (a);
}
