
#include "libft.h"

int     nword(char *s, char c)
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

        while (s[i])
        {
		if ((s[i] == c || s[i] == '\0') && s[i - 1] != c)
		{
		       	a[k] = i - j;
			k++;
		}
		if (s[i] == c)
			j = i;
		i++;
        }
        return (a);
}

int	main(void)
{
	int *x;

	x = nalpha("Hi>>Tom>I>was>thinking", '>');
	ft_putnbr(x[1]);
	ft_putchar('\n');
	return (0);
}
