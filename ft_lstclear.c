/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tclaereb <tclaereb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 14:46:40 by tclaereb          #+#    #+#             */
/*   Updated: 2023/11/03 14:50:35 by tclaereb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*item;

	if (!lst || !del)
		return ;
	item = (t_list *)*lst;
	while (item)
	{
		ft_lstdelone(item, del);
		item = item->next;
	}
	*lst = NULL;
}