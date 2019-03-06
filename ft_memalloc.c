
#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*m;

	m = (void) malloc(size);
	ft_bzero(m, size);
	return (m);
}
