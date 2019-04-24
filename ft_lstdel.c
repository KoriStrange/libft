
#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *lnk;
	t_list *tmp;

	lnk = *alst;
	while (lnk)
	{
		tmp = lnk->next;
		ft_lstdelone(&lnk, del);
		lnk = tmp;
	}
	*alst = NULL;
}
