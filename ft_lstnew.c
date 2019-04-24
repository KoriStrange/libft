
#include "libft.h"

t_list	*ft_lstnew(void *content, size_t content_size)
{
	t_list *newlink;

	newlink = (t_list *) malloc(sizeof(t_list));
	if (content == NULL)
	{
		newlink->content = NULL;
                newlink->content_size = 0;
	}
	else
	{
		newlink->content = (void *) malloc(sizeof(void) * content_size);
                newlink->content_size = content_size;
                ft_memcpy(newlink->content, content, content_size);
	}
	newlink->next = NULL;
	return (newlink);
}
