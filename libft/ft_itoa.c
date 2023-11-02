/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkeiser <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 12:00:08 by wkeiser           #+#    #+#             */
/*   Updated: 2023/09/08 12:01:16 by wkeiser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nb_digit(int n)
{
	int	nb_digit;

	nb_digit = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		nb_digit++;
	}
	while (n != 0)
	{
		nb_digit++;
		n /= 10;
	}
	return (nb_digit);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		nb_digit;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	nb_digit = ft_nb_digit(n);
	res = malloc(sizeof(char) * (nb_digit + 1));
	if (!res)
		return (NULL);
	res[nb_digit] = '\0';
	if (n < 0)
	{
		res[0] = '-';
		n = -n;
	}
	if (n == 0)
		res[0] = '0';
	while (n > 0)
	{
		res[nb_digit-- - 1] = (n % 10) + '0';
		n /= 10;
	}
	return (res);
}
