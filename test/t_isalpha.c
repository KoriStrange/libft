
#include "libft.h"
#include "libtest.h"

void	t_isalpha(char a, char b, char c)
{
	char *i;
	char *j;

	i = " is alphabet ";
	j = " is not alphabet ";
	if (a && b && c)
		ft_putstr("ft_isalpha: ");
	ft_putchar(a);
	if (ft_isalpha(a))
		ft_putstr(i);
	else
		ft_putstr(j);
	ft_putchar(b);
	if (ft_isalpha(b))
                ft_putstr(i);
        else
                ft_putstr(j);
	ft_putchar(c);
	if (ft_isalpha(c))
                ft_putstr(i);
        else
                ft_putstr(j);	
	ft_putstr("\n\n");
}
