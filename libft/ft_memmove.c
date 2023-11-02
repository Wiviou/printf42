/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkeiser <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 16:48:48 by wkeiser           #+#    #+#             */
/*   Updated: 2023/07/03 16:54:27 by wkeiser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t					i;
	unsigned char			*destination;
	const unsigned char		*source;

	i = -1;
	source = (const unsigned char *)src;
	destination = (unsigned char *)dest;
	if (source == destination)
		return (destination);
	if (destination < source)
	{
		while (++i < n)
			destination[i] = source[i];
	}
	else
	{
		i = n;
		while (i > 0)
		{
			destination[i - 1] = source[i - 1];
			i--;
		}
	}
	return (destination);
}
