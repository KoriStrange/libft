
#include "libft.h"

char	*ft_strcpy(char *dest, char *src)
{
	if (dest)
		ft_strncpy(dest, src, ft_strlen(src) + 1);
	return (dest);
}
