/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned_printf.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkeiser <wkeiser@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 09:21:03 by wkeiser           #+#    #+#             */
/*   Updated: 2023/10/23 13:38:02 by wkeiser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_unsigned_printf(unsigned int args, int *count)
{
	char	*str;

	str = ft_unsigned_itoa(args);
	ft_string_printf(str, count);
	free(str);
}
