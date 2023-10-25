/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tclaereb <tclaereb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 14:43:58 by tclaereb          #+#    #+#             */
/*   Updated: 2023/10/25 17:01:46 by tclaereb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t maxsize)
{
	size_t	len;
	char	*new_s;

	len = ft_strlen(s);
	if (start >= len || maxsize == 0)
	{
		new_s = (char *)ft_calloc(1, sizeof(char));
		if (!new_s)
			return (NULL);
		return (new_s);
	}
	else
	{
		if (maxsize <= len - start)
			new_s = (char *)ft_calloc(maxsize + 1, sizeof(char));
		else
			new_s = (char *)ft_calloc((len - start + 1), sizeof(char));
		if (!new_s)
			return (NULL);
		if (maxsize == (size_t) - 1)
			ft_strlcpy(new_s, s + start, maxsize);
		else
			ft_strlcpy(new_s, s + start, maxsize + 1);
	}
	return (new_s);
}
