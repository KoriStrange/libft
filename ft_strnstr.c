
#include "libft.h"

char	*ft_strnstr(char *h, char *n, size_t a)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (!n)
		return(h);
	while (h[i] && i < (int) a)
	{
		while (h[i + j] == n[j] && n[i])
			j++;
		if (n[j] == '\0')
			return (&h[i]);
		j = 0;
		i++;
	}
	return (NULL);
}

