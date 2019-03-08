
#include "libft.h"

int	nwords(char *s, char c)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		i++;
		if ((s[i] == c && s[i - 1] != c) || (s[i] == '\0' && s[i - 1] != c))
			j++;
	}
	return (j);
}
/*
int	nletters(char *s, char c)
{
	int i;
	int j;
	int c;
	int *n;

	i = 0;
	j = 0;
	c = 0;
	n = (int *) malloc(sizeof(int) * nwords(s));
	while (s[i] != '\0')
	{
		if (s[i] != c)
			j++;
		i++;
		if ((s[i] == c && s[i - 1] != c) || (s[i] == '\0' && s[i - 1] != c))
		{
			n[c] = j;
			c++;
			j = 0;
		}
	}
	return (n);
}
*/
char	**ft_strplit(char *s, char c)
{
	int	i;
	int	j;
	int	k;
	int	n;
	char	**w;

	i = 0;
	j = 0;
	k = 0;
	n = 0;
	w = (char **) malloc(sizeof(char *) * nwords(s, c));
	while (s[i] != '\0')
	{
		if (s[i] != c)
			j++;
		i++;
		if ((s[i] == c && s[i - 1] != c) || (s[i] == '\0' && s[i - 1] != c))
		{
			w[k] = ft_strsub(s, (unsigned int) n, (size_t) j);
			k++;
			j = 0;
		}
		if ((s[i + 1] != c && s[i] == c) || (s[i + 1] != '\0' && s[i] == c))
			n = i + 1;
	}
	return (w);
}
