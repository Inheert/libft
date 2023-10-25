/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tclaereb <tclaereb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 16:56:45 by tclaereb          #+#    #+#             */
/*   Updated: 2023/10/25 17:19:48 by tclaereb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s;
	size_t	ls1;
	size_t	ls2;

	ls1 = ft_strlen(s1);
	ls2 = ft_strlen(s2);
	s = (char *)ft_calloc(ls1 + ls2 + 1, sizeof(char));
	if (!s)
		return (NULL);
	ft_strlcat(s, s1, ls1 + 1);
	ft_strlcat(s + ls1, s2, ls2 + 1);
	return (s);
}
