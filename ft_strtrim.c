
#include "libft.h"

char	space(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

int	letters(char *s)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (!space(s[i]))
			j++;
		i++;
	}
	return (j);
}

char	*ft_strtrim(char *s)
{
	int	i;
	int	j;
	char	*f;

	i = 0;
	j = 0;
	f = ft_strnew(letters(s) + 1);
	while (s[i] != '\0')
	{
		if (!space(s[i]))
		{
			f[j] = s[i];
			j++;
		}
		i++;
	}
	return (f);
}
