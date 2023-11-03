/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tclaereb <tclaereb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 15:23:17 by tclaereb          #+#    #+#             */
/*   Updated: 2023/11/03 16:56:43 by tclaereb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newList;
	t_list	*item;

	if (!lst || !f || !del)
		return (NULL);
	newList = NULL;
	while (lst)
	{
		item = ft_lstnew(f(lst->content));
		if (!item)
		{
			ft_lstclear(&newList, del);
			return (NULL);
		}
		ft_lstadd_back(&newList, item);
		lst = lst->next;
	}
	return (newList);
}
