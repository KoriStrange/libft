
#include "libft.h"

void	ft_strclr(char *s)
{
	int n;

	n = 0;
	while (n < ft_strlen(s))
	{
		s[n] = '\0';
		n++;
	}
}
