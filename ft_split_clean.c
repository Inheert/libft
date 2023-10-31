/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_clean.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tclaereb <tclaereb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 11:16:35 by tclaereb          #+#    #+#             */
/*   Updated: 2023/10/31 13:07:02 by tclaereb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

struct ldetails
{
	unsigned int	len;
	unsigned int	slen;
	unsigned int	totalsep;
	unsigned int	idx[1024];
};

static struct ldetails	getlistdetails(char const *s, char c)
{
	char			*buffer;
	char			*lastbuffer;
	struct ldetails	infos;
	unsigned int	i;

	buffer = (char *)s;
	lastbuffer = (char *)s;
	infos.slen = ft_strlen(s);
	infos.len = 0;
	infos.totalsep = 0;
	i = 0;
	while (*buffer)
	{
		buffer = ft_strchr(buffer, c);
		if (!buffer || s + infos.slen == buffer)
			break ;
		if (buffer - lastbuffer > 1)
			infos.len++;
		infos.idx[i++] = buffer - s;
		lastbuffer = buffer++;
		infos.totalsep++;
	}
	if (s + infos.slen - lastbuffer > 1)
		infos.len++;
	return (infos);
}

void	assignvalues(char const *s, char **list, struct ldetails infos)
{
	unsigned int	idx;

	idx = infos.idx;
	while (*idx)
	{
		
	}
}

char	**ft_split(char const *s, char c)
{
	char			**list;
	struct ldetails	infos;
	infos = getlistdetails(s, c);
	list = (char **)ft_calloc(infos.len + 1, sizeof(char *));
	if (!list)
		return (NULL);
	assignvalues(s, list, infos);
	return (list);
}