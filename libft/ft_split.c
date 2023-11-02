/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkeiser <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 12:50:08 by wkeiser           #+#    #+#             */
/*   Updated: 2023/10/19 15:01:47 by wkeiser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check_sep(char const s, char c)
{
	return (s == c);
}

static unsigned int	count_str(char const *str, char c)
{
	unsigned int	i;
	unsigned int	count;

	count = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] && ft_check_sep(str[i], c))
			i++;
		if (str[i])
			count++;
		while (str[i] && !ft_check_sep(str[i], c))
			i++;
	}
	return (count);
}

static int	ft_strlen_sep(char const *str, char c)
{
	int	i;

	i = 0;
	while (str[i] && !ft_check_sep(str[i], c))
		i++;
	return (i);
}

static char	*ft_word(char const *str, char c)
{
	int		len_word;
	int		i;
	char	*word;

	i = 0;
	len_word = ft_strlen_sep(str, c);
	word = (char *)malloc(sizeof(char) * (len_word + 1));
	if (!word)
		return (NULL);
	while (i < len_word)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char			**strs;
	unsigned int	i;

	i = 0;
	if (!s)
		return (NULL);
	strs = (char **)malloc(sizeof(char *) * (count_str(s, c) + 1));
	if (!strs)
		return (NULL);
	while (*s != '\0')
	{
		while (*s != '\0' && ft_check_sep(*s, c))
			s++;
		if (*s != '\0')
		{
			strs[i] = ft_word(s, c);
			i++;
		}
		while (*s && !ft_check_sep(*s, c))
			s++;
	}
	strs[i] = 0;
	return (strs);
}
