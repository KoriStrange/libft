
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
/*
	ft_putstr("no. words = ");
	ft_putnbr(j);
	ft_putstr("\n");*/
        return (j);
} 

int     *nalpha(char *s, char c)
{
        int i;
        int j;
        int k;
	int l;
        int *a;

        i = 0;
        j = 0;
        k = 0;
	l = 0;
	a = (int *) malloc(sizeof(int) * nwords(s, c));
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
	/*
	ft_putstr("\nno. of alphabets:\n");
	while (l < k)
	{
		ft_putnbr(l);
		ft_putchar(' ');
		ft_putnbr(a[l]);
		ft_putchar('\n');
		l++;
	}*/
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
			ft_putnbr(k);
			ft_putchar(' ');
			ft_putstr(w[k]);
			ft_putchar(' ');
			ft_putnbr(n[k]);
			ft_putchar('\n');
                        k++;
                }
                if (s[i] == c)
                        j = i + 1;
        }
        return (w);
}

int	main(void)
{
	int	nw;
	int	*na;
	char	**x;
	char	*str;

	str = "lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.";
	nw = nwords(str, 'i');
	na = nalpha(str, 'i');
	x = ft_strsplit(str, 'i');
	ft_putstr("\ndone\n");
	return (0);
}
/*
lorem i
psum dolor si
t amet, consectetur adi
pi
sci
ng eli
t. Sed non ri
sus. Suspendi
sse lectus tortor, di
gni
ssi
m si
t amet, adi
pi
sci
ng nec, ultri
ci
es sed, dolor. Cras elementum ultri
ci
es di
am. Maecenas li
gula massa, vari
us a, semper congue, eui
smod non, mi
.
*/

