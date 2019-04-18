
#include "libft.h"

char	*ft_strmap(char *s, char (*f)(char))
{
	int	i;
	char	*w;

	i = 0;
	w = ft_strnew(ft_strlen(s) + 1);
	while (s[i] != '\0')
	{
		w[i] = f(s[i]);
		i++;
	}
	return (w);
}
