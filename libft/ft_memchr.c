/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkeiser <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 16:48:48 by wkeiser           #+#    #+#             */
/*   Updated: 2023/07/03 16:54:27 by wkeiser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t					i;
	const unsigned char		*str;
	unsigned char			c1;

	i = 0;
	if (!n)
		return (NULL);
	str = s;
	c1 = (unsigned char)c;
	while ((i < n) && (str[i] != c1))
		i++;
	if (i == n)
		return (NULL);
	else
		return ((void *)&str[i]);
}
