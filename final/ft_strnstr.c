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

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	char	*_s1;
	char	*_s2;
	size_t	size;
	int		count;

	_s1 = (char *)s1;
	_s2 = (char *)s2;
	size = ft_strlen(_s2);
	count = 0;
	if (size == 0)
		return (_s1);
	while (n--)
	{
		if (count == (int)size)
			return (_s1 - size);
		if (_s2[count] == *_s1++)
			count++;
		else
			count = 0;
	}
	return (NULL);
}
