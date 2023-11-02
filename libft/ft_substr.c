/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkeiser <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 14:53:08 by wkeiser           #+#    #+#             */
/*   Updated: 2023/09/06 14:54:16 by wkeiser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_substr2(char **strret, const char *src, size_t len)
{
	char	*dst;

	dst = *strret;
	while (len > 0)
	{
		*dst = *src;
		dst++;
		src++;
		len--;
	}
	*dst = '\0';
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		s_len;
	char		*strret;
	const char	*src;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	if (len > s_len - start)
		len = s_len - start;
	strret = (char *)malloc(sizeof(char) * (len + 1));
	if (!strret)
		return (NULL);
	src = s + start;
	ft_substr2(&strret, src, len);
	return (strret);
}
