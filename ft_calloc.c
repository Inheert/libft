/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tclaereb <tclaereb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 15:20:37 by tclaereb          #+#    #+#             */
/*   Updated: 2023/10/30 16:29:52 by tclaereb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nelem, size_t size)
{
	char	*ptr;
	size_t	size_max;

	size_max = (size_t)-1;
	if (nelem == 0 || size == 0)
		return ((char *)malloc(0));
	if (size != 0)
		if (nelem > size_max / size)
			return (NULL);
	ptr = (char *)malloc(size * nelem);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, nelem * size);
	return (ptr);
}
