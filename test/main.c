
#include "libft.h"

struct box
{
	int	num;
	struct box *next;
};

struct box *createbox(int n)
{
	struct box *x;

	x = malloc(sizeof(struct box));
	x->num = 1;
	return (x);
}

struct box *insert(struct box *node, int n)
{
	struct box *x;
	struct box *curr;
	struct box *prev;

	x = createbox(n);
	curr = node;
	prev = NULL;

	while (curr && n < curr->num)
	{
		prev = curr;
		curr = curr->next;
	}

	x->next = curr;
	if (prev)
		prev->next = x;
	else
		node = x;
	return (node);
}

int	main(void)
{
	struct box *start;
	start = malloc(sizeof(struct box));

	start = insert(start, 7);
	start = insert(start, 2);
	start = insert(start, 4);

	ft_putnbr(start->num);
	ft_putnbr(start->next->num);
	ft_putnbr(start->next->next->num);
	return (0);
}
