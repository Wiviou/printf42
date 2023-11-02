/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkeiser <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 23:24:35 by wkeiser           #+#    #+#             */
/*   Updated: 2023/07/14 14:30:17 by wkeiser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t		i;
	size_t		j;

	if (str == NULL && len == 0)
		return (NULL);
	j = 0;
	i = 0;
	if (ft_strlen(to_find) == 0)
		return ((char *)str);
	while (str[i])
	{
		while (str[i] == to_find[j] && i < len)
		{
			if (j == (ft_strlen(to_find) - 1))
				return ((char *)&(str[i - j]));
			i++;
			j++;
		}
		i -= j;
		j = 0;
		i++;
	}
	return (0);
}
