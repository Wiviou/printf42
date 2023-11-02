/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa_printf.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkeiser <wkeiser@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 09:19:51 by wkeiser           #+#    #+#             */
/*   Updated: 2023/10/24 16:19:54 by wkeiser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_hexa_printf(unsigned int value, int *count, char speci)
{
	char	*hex_digits;
	char	buffer[9];
	int		i;

	i = 8;
	if (speci == 'x')
		hex_digits = "0123456789abcdef";
	else
		hex_digits = "0123456789ABCDEF";
	buffer[i--] = '\0';
	if (value == 0)
	{
		write(1, "0", 1);
		(*count)++;
	}
	else
	{
		while (value != 0 && i >= 0)
		{
			buffer[i--] = hex_digits[value % 16];
			value /= 16;
		}
	}
	ft_string_printf(&buffer[i + 1], count);
}
