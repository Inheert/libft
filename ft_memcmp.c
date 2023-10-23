/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Theo <theoclaereboudt@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 20:04:14 by Theo              #+#    #+#             */
/*   Updated: 2023/10/17 20:04:14 by Theo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *pointer1, const void *pointer2, size_t size)
{
	const unsigned char	*p1;
	const unsigned char	*p2;
	size_t				i;

	p1 = pointer1;
	p2 = pointer2;
	i = 0;
	while (i < size)
	{
		if (p1[i] != p2[i])
			return (p1[i] - p2[i]);
		i++;
	}
	return (0);
}
