/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer_printf.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkeiser <wkeiser@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 09:22:51 by wkeiser           #+#    #+#             */
/*   Updated: 2023/11/02 11:02:51 by wkeiser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_pointer_printf(void *args, int *count)
{
	char					*hex_digits;
	char					buffer[sizeof(void *) * 2 + 3];
	unsigned long long		value;
	int						i;

	value = (unsigned long long)args;
	hex_digits = "0123456789abcdef";
	i = sizeof(buffer) - 1;
	buffer[i--] = '\0';
/*	if (value == 0)
	{
		write(1, "0x0", 3);
		(*count) += 3;
	}*/
	else
	{
		while (value != 0)
		{
			buffer[i--] = hex_digits[value % 16];
			value /= 16;
		}
		if (value == 0)
			buffer[i--] = '0';
		buffer[i--] = 'x';
		buffer[i--] = '0';
		ft_string_printf(&buffer[i + 1], count);
	}
}
