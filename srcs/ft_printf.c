/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkeiser <wkeiser@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 13:55:01 by wkeiser           #+#    #+#             */
/*   Updated: 2023/10/24 16:17:34 by wkeiser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list		args;
	const char	*ptr;
	int			count;

	va_start(args, format);
	count = 0;
	ptr = format;
	while (*ptr)
	{
		if (*ptr == '%')
			ft_check_situation(&ptr, &count, args);
		else
			ft_display_printf(ptr, &count);
		ptr++;
	}
	va_end(args);
	return (count);
}
