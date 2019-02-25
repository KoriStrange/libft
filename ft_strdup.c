
#include "libft.h"

char	*ft_strdup(char *s)
{
	char	*d;

	d = (char *) malloc(sizeof(char) * (ft_strlen(s) + 1));
	ft_strcpy(d, s);
	return (d);
}
