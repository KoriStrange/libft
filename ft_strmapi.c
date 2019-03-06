
#include "libft.h"

char	*ft_strmapi(char *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char		*w;

	i = 0;
	w = ft_strnew(ft_strlen(s) + 1);
	while (s[i] != '\0')
	{
		w[i] = f(i, s[i]);
		i++;
	}
	return (w);
}
