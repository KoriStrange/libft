
#include "libft.h"

char	*strdup(char *s)
{
	int	i;
	char	*d;

	i = 0;
	d = malloc(sizeof(char*) * (ft_strlen(s) + 1));
	while (s[i] != '\0')
	{
		d[i] = s[i];
		i++;
	}
	d[i] = '\0';
	return (d);
}
