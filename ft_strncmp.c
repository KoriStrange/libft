
#include "libft.h"

int	ft_strncmp(char *s1, char *s2, size_t n)
{
	size_t	i;
	int	d;

	i = 0;
	d = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && i < n && d == 0)
	{
		d = s1[i] - s2[i];
		i++;
	}
	return (d);
}
