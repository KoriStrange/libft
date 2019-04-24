
#include "libft.h"

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	t_list *x;

	x = *alst;
	x = x->next;
	(del)((*alst)->content, (*alst)->content_size);
	free(*alst);
	*alst = NULL;
}
