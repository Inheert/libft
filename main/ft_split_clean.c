/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_clean.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tclaereb <tclaereb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 16:48:39 by tclaereb          #+#    #+#             */
/*   Updated: 2023/11/04 17:17:05 by tclaereb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	count_string(const char *s, char c)
{
	int	count;
	int	is_inside;

	count = 0;
	is_inside = 0;
	while (*s)
	{
		if (*s++ != c)
		{
			if (!is_inside)
			{
				count++;
				is_inside = 1;
			}
		}
		else
			is_inside = 0;
	}
	return (count);
}

static char	*apply_string(const char *start, const char *end)
{
	int		len;
	char	*result;

	len = end - start;
	result = (char *)ft_calloc(len + 1, sizeof(char));
	if (!result)
		return (NULL);
	ft_strlcpy(result, start, len + 1);
	return (result);
}

static int	manage_string(int is_inside, int i, const char *start, const char *s, char **result)
{
	if (!is_inside)
	{
		start = s;
		return (1);
	}
	else if (is_inside)
	{
		result[i] = apply_string(start, s);
		if (!result[i])
			return (-1);
		return (0);
	}
	return (-1);
}

static int	detect_string(const char *s, char c, char **result)
{
	int			i;
	int			is_inside;
	const char	*start;

	i = 0;
	is_inside = 0;
	start = s;
	while (*s)
	{
		if (*s != c)
		{
			if (!is_inside)
			{
				start = s;
				is_inside = 1;
			}
		}
		else
		{
			if (is_inside)
			{
				result[i] = apply_string(start, s);
				if (!result[i])
					return (0);
				i++;
			}
			is_inside = 0;
		}
		s++;
	}
	if (is_inside)
	{
		result[i] = apply_string(start, s);
		if (!result[i])
			return (0);
	}
	return (1);
}

char	**ft_splitt(const char *s, char c)
{
	unsigned int	count;
	char			**result;

	if (!s)
		return (NULL);
	count = count_string(s, c);
	result = (char **)ft_calloc(count + 1, sizeof(char *));
	if (!result)
		return (NULL);
	if (!detect_string(s, c, result))
	{
		while (count--)
			free(result[count]);
		free(result);
		return (NULL);
	}
	result[count] = NULL;
	return (result);
}
