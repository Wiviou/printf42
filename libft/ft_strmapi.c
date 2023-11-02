/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkeiser <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 13:53:08 by wkeiser           #+#    #+#             */
/*   Updated: 2023/09/06 13:54:16 by wkeiser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*newmap;
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return (NULL);
	newmap = (char *)ft_calloc((ft_strlen(s) + 1), sizeof(char));
	if (!newmap)
		return (NULL);
	while (s[i])
	{
		newmap[i] = f(i, s[i]);
		i++;
	}
	return (newmap);
}
