
#include "libft.h"

char	*strdup(const char *s)
{
	int	i;
	char	*d;

	i = 0;
	d = (char *) malloc(sizeof(char) * (ft_strlen(s) + 1));
	while (s[i] != '\0')
	{
		d[i] = s[i];
		i++;
	}
	d[i] = '\0';
	return (d);
}
