
#include "libft.h"

int	ft_atoi(char *str)
{
	int nb;
	int i;
	int s;

	nb = 0;
	i = 0;
	s = 1;
	while (str[i] == '-')
	{
		s *= -1;
		i++;
	}
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			nb = (nb * 10) + (str[i] - 48);
		i++;
	}
	return (nb * s);
}
