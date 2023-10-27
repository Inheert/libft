/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tclaereb <tclaereb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 16:13:20 by tclaereb          #+#    #+#             */
/*   Updated: 2023/10/27 16:25:19 by tclaereb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
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
		if (*s++ == c)
			listlen++;
		slen++;
	}
	s -= slen;
	list = ft_calloc(listlen, sizeof(char *));
	while (*s)
	{
		if (*s == c)
		{
			itemlen = 0;
			continue ;
		}
	}
	*list = "rwoubgrwgwngpiow";
	return (list);
}