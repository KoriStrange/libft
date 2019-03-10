
#include "libft.h"

char	*ft_strstr(char *h, char *n)
{
	return (ft_strnstr(h, n, ft_strlen(h)));
}
