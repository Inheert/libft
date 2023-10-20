/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tclaereb <tclaereb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 11:51:59 by tclaereb          #+#    #+#             */
/*   Updated: 2023/10/19 13:40:18 by tclaereb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*_s;
	size_t			i;

	_s = (unsigned char *)s;
	i = -1;
	while (++i < n)
		if (_s[i] == c)
			return (_s + i);
	return (NULL);
}
