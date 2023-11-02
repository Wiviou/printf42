/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char_printf.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkeiser <wkeiser@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 00:21:57 by wkeiser           #+#    #+#             */
/*   Updated: 2023/11/02 10:46:03 by wkeiser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_char_printf(int c, int *count)
{
	if (!c)
	{
		write(1, &c, 1);
		(*count)++;
		return ;
	}
	c = c % 256;
	write(1, &c, 1);
	(*count)++;
}
