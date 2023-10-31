/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tclaereb <tclaereb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 16:13:20 by tclaereb          #+#    #+#             */
/*   Updated: 2023/10/31 11:26:45 by tclaereb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**freeptr(char **list)
{
	while (*list)
		list--;
	while (*list)
		free(list);
	return (NULL);
}

char	**ft_splitt(char const *s, char c)
{
	char	**list;
	size_t	listlen;
	size_t	slen;
	size_t	itemlen;

	listlen = 1;
	slen = 0;
	itemlen = 0;
	while (*s)
	{
		if (*s++ == c && itemlen != 0)
		{
			listlen++;
			itemlen = 0;
			slen++;
			continue ;
		}
		else
			itemlen++;
		slen++;
	}
	if (listlen == 0)
		return (NULL);
	s -= slen;
	list = ft_calloc(listlen + 1, sizeof(char *));
	if (!list)
		return (NULL);
	itemlen = 0;
	while (*s)
	{
		slen--;
		if ((*s == c || &*s == &s[slen]) && itemlen != 0)
		{
			if (&*s == &s[slen])
			{
				itemlen++;
				s++;
			}
			*list = (char *)malloc((itemlen + 1) * sizeof(char));
			if (!*list)
				return (freeptr(list));
			ft_strlcpy(*list, s - itemlen, itemlen + 1);
			itemlen = 0;
			list++;
			s++;
			continue ;
		}
		else if ((*s == c || &*s == &s[slen]) && itemlen == 0)
		{
			s++;
			continue ;
		}
		itemlen++;
		s++;
	}
	*list = NULL;
	printf("-%zu", listlen);
	return (list - listlen);
}
