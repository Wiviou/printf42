/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkeiser <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 14:48:48 by wkeiser           #+#    #+#             */
/*   Updated: 2023/07/03 14:54:27 by wkeiser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t					i;
	unsigned char			*strdest;
	const unsigned char		*strsource;

	strdest = (unsigned char *)dest;
	strsource = (const unsigned char *)src;
	i = 0;
	if (dest == NULL && src == NULL)
		return (NULL);
	if (!n)
		return (dest);
	while (i < n)
	{
		strdest[i] = strsource[i];
		i++;
	}
	return (dest);
}
