
#include "libft.h"

int	ft_atoi(char *str)
{
	int nb;
	int s;
	int i;

	nb = 0;
	s = 1;
	i = 0;
	if (str[i] == '-')
	{
		s *= -1;
		i++;
	}
	while (str[i] != '\0')
	{
		if (ft_isdigit(str[i]))
			nb = (nb * 10) + (str[i] - '0');
		i++;
	}
	return (s * nb);
}
