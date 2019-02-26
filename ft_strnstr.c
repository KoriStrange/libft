
#include "libft.h"

char	*ft_strnstr(char *h, char *n, size_t a)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (h[i] != '\0')
	{
		while (h[i + j] == n[j])
		{
			j++;
		}
		if (n[j] == '\0' || j == (int) a)
			return (&h[i]);
		i++;
	}
	return (NULL);
}

