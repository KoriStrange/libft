
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list  *x;
	t_list  *y;

	x = lst;
	y = NULL;
	while (x != NULL)
	{
		if (f(x))
		{
			y = (t_list *) malloc(sizeof(t_list));
			y = x;
			y = y->next;
		}
		else
			break;
		x = x->next;
	}
	return (y);
}
