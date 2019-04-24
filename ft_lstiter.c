
#include "libft.h"

void    ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list *x;

	x = lst;
	while (x != NULL)
	{
		f(x);
		x = x->next;
	}
}
