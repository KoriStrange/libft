
#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	int i;
	int d;

	i = 0;
	d = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && d == 0)
	{
		d = s1[i] - s2[i];
		i++;
	}
	return (d);
}
