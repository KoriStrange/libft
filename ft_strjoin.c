
#include "libft.h"

char	*ft_strjoin(char *s1, char *s2)
{
	char	*f;

	f = ft_strnew(ft_strlen(s1) + ft_strlen(s2) + 1);
	f = ft_strcat(s1, s2);
	return (f);
}
