/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tclaereb <tclaereb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:27:54 by tclaereb          #+#    #+#             */
/*   Updated: 2023/10/19 13:44:00 by tclaereb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *string, int searchedChar)
{
	while (*string != '\0')
	{
		if (*string == (char)searchedChar)
			return ((char *)string);
		string++;
	}
	if ((char)searchedChar == '\0')
		return ((char *)string);
	return (NULL);
}
