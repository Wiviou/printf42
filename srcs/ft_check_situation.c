/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_situation.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkeiser <wkeiser@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 16:31:19 by wkeiser           #+#    #+#             */
/*   Updated: 2023/10/24 13:38:28 by wkeiser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	handle_chars_specifiers(char speci, va_list args, int *count)
{
	if (speci == 'c')
	{
		ft_char_printf(va_arg(args, int), count);
		return (1);
	}
	if (speci == 's')
	{
		ft_string_printf(va_arg(args, char *), count);
		return (1);
	}
	if (speci == '%')
	{
		write (1, "%", 1);
		(*count)++;
		return (1);
	}
	return (0);
}

static int	handle_numbers_specifiers(char speci, va_list args, int *count)
{
	if (speci == 'd' || speci == 'i')
	{
		ft_integer_printf(va_arg(args, int), count);
		return (1);
	}
	if (speci == 'u')
	{
		ft_unsigned_printf(va_arg(args, unsigned int), count);
		return (1);
	}
	return (0);
}

static int	handle_hexa_specifiers(char speci, va_list args, int *count)
{
	if (speci == 'x' || speci == 'X')
	{
		ft_hexa_printf(va_arg(args, unsigned int), count, speci);
		return (1);
	}
	if (speci == 'p')
	{
		ft_pointer_printf(va_arg(args, void *), count);
		return (1);
	}
	return (0);
}

void	ft_check_situation(const char **ptr, int *count, va_list args)
{
	(*ptr)++;
	if (!(*ptr)[0])
	{
		write(1, "%", 1);
		(*count)++;
		return ;
	}
	if (handle_chars_specifiers((*ptr)[0], args, count))
	{
		return ;
	}
	if (handle_numbers_specifiers((*ptr)[0], args, count))
	{
		return ;
	}
	if (handle_hexa_specifiers((*ptr)[0], args, count))
	{
		return ;
	}
}
