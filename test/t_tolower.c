
#include "libft.h"
#include "libtest.h"

void	t_tolower(char *s)
{
	if (s)
		ft_putstr("ft_tolower: ");
	while (*s != '\0')
	{
		ft_putchar(ft_tolower(*s));
		s++;
	}
	ft_putstr("\n\n");
}
