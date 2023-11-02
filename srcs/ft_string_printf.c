/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_printf.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkeiser <wkeiser@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:09:32 by wkeiser           #+#    #+#             */
/*   Updated: 2023/10/24 13:32:31 by wkeiser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_string_printf(const char *str, int *count)
{
	if (!str)
	{
		write(1, "(null)", 6);
		*count += 6;
	}
	else
	{
		write(1, str, ft_strlen(str));
		*count += ft_strlen(str);
	}
}
