
#include "libft.h"

void    ft_lstadd(t_list **alst, t_list *new)
{
        t_list *x;

	x = new;
	if (x->next == NULL)
	{
        	x->next = *alst;
        	*alst = x;
	}
}
