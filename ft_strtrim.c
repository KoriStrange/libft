
#include "libft.h"

char	space(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

char	*ft_strtrim(char *s)
{
	int	i;
	int	j;
	int	k;
	char	*f;

	i = 0;
	j = 0;
	k = ft_strlen(s);
        while (space(s[i]))
                i++;
        while (space(s[--k]) && s[j])
                j++;
	if (s[i] == '\0')
		f = ft_strsub(s, i, 1);
	else
		f = ft_strsub(s, i, (ft_strlen(s) - (i + j)));
        return (f);
}
