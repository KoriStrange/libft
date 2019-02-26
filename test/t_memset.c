
#include "libtest.h"
#include "libft.h"

void	t_memset(char c, size_t n)
{
	char a[15]; 
		
	ft_memset(a, c, n);
	if (c)
		ft_putstr("ft_memset: ");
	ft_putstr("size(");
	ft_putnbr((int) n);
	ft_putstr(") ");
	ft_putstr(a);
	ft_putstr("\n\n");
}
