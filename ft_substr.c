/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tclaereb <tclaereb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 14:43:58 by tclaereb          #+#    #+#             */
/*   Updated: 2023/10/25 15:36:06 by tclaereb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t maxsize)
{
	size_t	len;
	char	*new_s;

	len = ft_strlen(s);
	if (start >= len)
	{
		return (NULL);
	}
	if (maxsize >= len - start)
		new_s = ft_calloc(maxsize + 1, sizeof(char));
	else
		new_s = ft_calloc(len - start + 1, sizeof(char));
	if (!new_s)
		return (NULL);
	ft_strlcpy(new_s, s + start, maxsize + 1);
	return (new_s);
}
