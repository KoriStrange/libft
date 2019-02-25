
#include "libft.h"
#include "libtest.h"

void	t_toupper(char *s)
{
	if (s)
		ft_putstr("ft_toupper: ");
	while (*s != '\0')
	{
		ft_putchar(ft_toupper(*s));
		s++;
	}
	ft_putstr("\n\n");
}
