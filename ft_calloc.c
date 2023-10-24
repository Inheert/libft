/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tclaereb <tclaereb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 15:20:37 by tclaereb          #+#    #+#             */
/*   Updated: 2023/10/24 17:22:07 by tclaereb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nelem, size_t size)
{
	char	*ptr;
	size_t size_max = (size_t)-1;

	if (size != 0)
		if (nelem > size_max / size)
			return (NULL);
		
	if (nelem == 0 || size == 0)
	{
		nelem = 1;
		size = 1;
	}
	ptr = (char *)malloc(size * nelem);
	if (ptr)
		ft_bzero(ptr, nelem * size);
	else
		return (NULL);	
	return (ptr);
}