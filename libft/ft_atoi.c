/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkeiser <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 16:48:48 by wkeiser           #+#    #+#             */
/*   Updated: 2023/06/28 09:54:27 by wkeiser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char c)
{
	if (((c >= 9) && (c <= 13)) || c == 32)
		return (1);
	return (0);
}

static int	ft_sign(char c)
{
	if (c == '-' || c == '+')
		return (1);
	return (0);
}

static int	ft_is_numeric(char c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	rep;
	int	sign;

	i = 0;
	sign = 1;
	rep = 0;
	while (ft_isspace(str[i]))
		i++;
	if (ft_sign(str[i]))
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (ft_is_numeric(str[i]))
	{
		rep = rep * 10 + (str[i] - '0');
		i++;
	}
	return (rep * sign);
}
