
#include "libft.h"

int	ft_strcmp(char *s1, char *s2)
{
	return (ft_strncmp(s1, s2, ((size_t) ft_strlen(s1)) + 1));
}
