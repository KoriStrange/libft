
#include "libft.h"

char	*ft_strmap(char *s, char (*f)(char))
{
	int	i;
	char	*str;

	str = ft_strnew(ft_strlen(s) + 1);
	while (s[i] != '\0')
	{
		str[i] = f(s[i]);
		i++;
	}
	return (str);
}
