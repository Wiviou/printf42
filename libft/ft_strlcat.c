/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkeiser <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 23:00:52 by wkeiser           #+#    #+#             */
/*   Updated: 2023/06/15 11:43:06 by wkeiser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	destlen;
	size_t	srclen;

	destlen = 0;
	srclen = 0;
	if ((dest == NULL || src == NULL) && size == 0)
		return (0);
	while (dest[destlen] && destlen < size)
		destlen++;
	while (src[srclen] && (destlen + srclen + 1 < size))
	{
		dest[destlen + srclen] = src[srclen];
		srclen++;
	}
	if (destlen < size)
		dest[destlen + srclen] = '\0';
	while (src[srclen])
		srclen++;
	return (destlen + srclen);
}
