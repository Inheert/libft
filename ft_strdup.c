/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tclaereb <tclaereb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 10:49:22 by tclaereb          #+#    #+#             */
/*   Updated: 2023/10/25 11:26:13 by tclaereb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t 	len;
	char	*new_s;

	len = ft_strlen(s);
	new_s = ((char *)ft_calloc(len + 1, sizeof(char)));
	if (!new_s)
		return (NULL);
	while (*s)
		*new_s++ = *s++;
	*new_s = '\0';
	return (new_s);
}