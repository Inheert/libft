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

int	ft_atoi(const char *str)
{
	int	num;
	int	operator;
	int	is_first_loop;

	num = 0;
	operator = 1;
	is_first_loop = 1;
	while (*str++)
	{
		if (9 <= *str && *str <= 13 && num == 0)
			continue ;
		else if (*str == '-')
		{
			if (!is_first_loop)
				return (num * operator);
			operator = -1;
		}
		else if (*str == '+')
		{
			if (!is_first_loop)
				return (num * operator);
		}
		else if (!ft_isdigit(*str))
			return (num * operator);
		else
			num = num * 10 + (*str - 48);
		is_first_loop = 0;
	}
	return (num * operator);
}
