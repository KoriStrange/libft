
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*x;
	t_list	*a;

	x = ft_lstnew(lst->content, lst->content_size);
	if (x && lst)
	{
		x = f(lst);
		a = x;
		while (lst->next)
		{
			x->next = ft_lstnew(lst->content, lst->content_size);
			if (x->next)
				x->next = f(lst->next);
			x = x->next;
			lst = lst->next;
		}
		return (a);
	}
	return (NULL);
}
