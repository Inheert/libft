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

char	*ft_strnstr(const char *str, const char *find, size_t len)
{
	size_t		i;
	size_t		j;

	if (*find == '\0')
		return ((char *)str);
	i = 0;
	while (str[i] && i < len)
	{
		j = 0;
		while (find[j] && find[j] == str[i + j] && i + j < len)
			j++;
		if (!find[j])
			return ((char *)&str[i]);
		if (!str[i + j] || i + j == len)
			return ((char *)(void *) 0);
		i++;
	}
	return ((char *)(void *)0);
}
