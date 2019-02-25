
#include "libft.h"
#include "libtest.h"

void	t_strcpy(char *s)
{
	char a[15] = "hello world";
	char b[15] = "hello peter";

	strcpy(a, s);
	ft_strcpy(b, s);
	if (s)
		ft_putstr("ft_strcpy: ");
	ft_putstr("strcpy = ");
	ft_putstr(a);
	ft_putstr(" ft_strcpy = ");
	ft_putstr(b);
	ft_putstr("\n\n");
}
