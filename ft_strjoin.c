
#include "libft.h"

char	*ft_strjoin(char *s1, char *s2)
{
	char	*f;

	f = ft_strnew((size_t) (ft_strlen(s1) + ft_strlen(s2) + 1));
	ft_strcpy(f, s1);
	ft_strcat(f, s2);
	return (f);
}
