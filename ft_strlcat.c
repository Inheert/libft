/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft8strlcat.c                                        :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: tclaereb <tclaereb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 11:51:59 by tclaereb          #+#    #+#             */
/*   Updated: 2023/10/19 13:40:18 by tclaereb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t maxsize)
{
	size_t	dstlen;
	size_t	srclen;
	int		i;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	i = 0;
	if (dstlen >= maxsize)
		return (maxsize + srclen);
	while (src[i] != '\0' && (dstlen + i) < (maxsize - 1))
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	dst[dstlen + i] = '\0';
	return (dstlen + srclen);
}
