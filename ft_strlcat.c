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

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (dstlen > maxsize)
		dstlen = maxsize;
	if (dstlen == maxsize)
		return (maxsize + srclen);
	ft_memcpy(dst + dstlen, src, maxsize - dstlen - 1);
	while (*dst)
		printf("-- %c\n", *dst++);
	return (dstlen + srclen);
}
