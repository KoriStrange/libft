
#include "libft.h"

void	ft_strclr(char *s)
{
	ft_bzero(s, (size_t) ft_strlen(s));
}
