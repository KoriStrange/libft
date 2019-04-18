
#include "libft.h"

int     nwords(char *s, char c)
{
        int i;
        int j;

        i = 0;
        j = 0;
        while (s[i])
        {
                if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
                        j++;
                i++;
        }       
        return (j);
} 

int     *nalpha(char *s, char c)
{
        int i;
        int j;
        int k;
        int *a;

        i = 0;
        j = 0;
        k = 0;
	a = malloc(sizeof(int) * nwords(s, c));
        while (s[i])
        {
		i++;
		if ((s[i] == c || s[i] == '\0') && s[i - 1] != c)
		{
		       	a[k] = i - j;
			k++;
		}
		if (s[i] == c)
			j = i + 1;
        }
        return (a);
}

char	**ft_strsplit(char *s, char c)
{
	int	i;
        int	j;
        int	k;
        int	*n;
	char	**w;

        i = 0;
        j = 0;
        k = 0;
        n = nalpha(s, c);
	w = (char **) malloc(sizeof(char *) * nwords(s, c));
        while (s[i])
        {
                i++;
                if ((s[i] == c || s[i] == '\0') && s[i - 1] != c)
                {
                        w[k] = ft_strnew(n[k] + 1);
			w[k] = ft_strsub(s, j, n[k]);
                        k++;
                }
                if (s[i] == c)
                        j = i + 1;
        }
        return (w);
}
