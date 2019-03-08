
#include "libft.h"

char	*ft_strsub(char *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char		*w;

	i = 0;
	w = ft_strnew(len);
	while ((size_t) i < len && (int) start < ft_strlen(s))
	{
		w[i] = s[start];
		i++;
		start++;
	}
	return (w);
}
