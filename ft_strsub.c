
#include "libft.h"

char	*ft_strsub(char *s, unsigned int start, size_t n)
{
	int	n;
	char	*f;

	n = 0;
	f = (char *) malloc(sizeof(char) * ((int) n - start));
	while (start < (int) n && start < (ft_strlen(s) + 1))
	{
		f[n] = s[start];
		n++;
		start++;
	}
	f[n] = '\0';
	return (f);
}
