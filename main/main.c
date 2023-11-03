#include "libft.h"
#include <limits.h>

void	*ft_map(void *ct)
{
	int i;
	void	*c;
	char	*pouet;

	c = ct;
	i = -1;
	pouet = (char *)c;
	while (pouet[++i])
		if (pouet[i] == 'o')
			pouet[i] = 'a';
	return (c);
}

void    ft_del(void *content)
{
	free(content);
}


int	main(void)
{
	printf("????????????????????");
	t_list	*item;
	item = ft_lstnew("wpogur");
	ft_lstadd_front(&item, ft_lstnew("Helllo"));
	ft_lstadd_front(&item, ft_lstnew("Hi"));
	ft_lstadd_back(&item, ft_lstnew("Back added"));
	ft_lstadd_back(&item, ft_lstnew("Back addsdgdsggsed"));
	ft_lstadd_back(&item, ft_lstnew("Bacewtwetk adgsgewded"));
	printf("????????????????????");
	ft_lstmap(item, &ft_map, &ft_del);
	while (item)
	{
		printf("Content: %s\nActual: %p, Next: %p\n\n", (char *)item->content, item, item->next);
		item = item->next;
	}
}
