
#include "libft.h"

char	*ft_strcat(char *dest, char *src)
{
	return (ft_strncat(dest, src, (size_t) ft_strlen(src)));
}
