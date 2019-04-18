
#include "libft.h"

char	ft_space(char c)
{
	return (c == ' '|| (c >= 9 && c <= 13));
}

int	ft_atoi(char *str)
{
	int n;
	int s;
	int i;

	n = 0;
	s = 1;
	i = 0;
	while (str[i] && (ft_space(str[i])))
		i++;
	if (str[i] == '-')
	{
		s *= -1;
		i++;
	}
	else if (str[i] && str[i] == '+')
		i++;
	while (str[i])
	{
		if (ft_isdigit(str[i]))
			n = (n * 10) + (str[i] - '0');
		else
			return (s * n);
		i++;
	}
	return (s * n);
}
