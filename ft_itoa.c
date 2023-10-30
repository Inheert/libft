/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tclaereb <tclaereb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 13:05:27 by tclaereb          #+#    #+#             */
/*   Updated: 2023/10/30 16:01:11 by tclaereb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	countsize(long n)
{
	int	count;

	if (n == 0)
		return (2);
	count = 1;
	if (n < 0)
	{
		n *= -1;
		count++;
	}
	while (n)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

static void	recursive(char *ptr, int n, unsigned int size)
{
	unsigned int	ln;
	char			c[1];

	if (n < 0)
	{
		ln = (unsigned int)n * -1;
		*ptr = '-';
	}
	else
		ln = (unsigned int)n;
	if (ln / 10 >= 1)
	{
		recursive(ptr, ln / 10, size);
		recursive(ptr, ln % 10, size);
	}
	else
	{
		*c = ln + 48;
		ft_strlcat(ptr, c, size);
	}
}

char	*ft_itoa(int n)
{
	char	*ptr;
	int		size;

	size = countsize((long)n);
	ptr = ft_calloc(size, sizeof(char));
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, size);
	recursive(ptr, n, size);
	return (ptr);
}
