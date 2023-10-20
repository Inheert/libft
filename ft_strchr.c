/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tclaereb <tclaereb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:27:54 by tclaereb          #+#    #+#             */
/*   Updated: 2023/10/19 13:44:00 by tclaereb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*_s;
	size_t	i;
	size_t	len;

	_s = (char *)s;
	i = -1;
	len = ft_strlen(s);
	while (++i <= len)
	{
		if (s[i] == c)
			return (_s + i);
	}
	return (NULL);
}
