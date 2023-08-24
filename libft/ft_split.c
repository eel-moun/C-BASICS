/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-moun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 00:42:32 by eel-moun          #+#    #+#             */
/*   Updated: 2021/11/19 11:02:07 by eel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count(char const *s, char c)
{
	size_t	num;

	num = 0;
	while (*s)
	{
		if (*s != c)
			num++;
		while (*s != c && *s)
			s++;
		while (*s == c && *s)
			s++;
	}
	return (num);
}

static int	freeall(char *str, char **str0)
{
	int	i;

	i = 0;
	if (!str)
	{
		while (str0[i])
		{
			free(str0[i]);
			i++;
		}
		free(str0);
		return (1);
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		len;
	int		index;
	int		j;

	if (!s)
		return (NULL);
	j = count(s, c);
	index = 0;
	str = ft_calloc((j + 1), sizeof(char *));
	if (!str)
		return (NULL);
	while (*s && index < j)
	{
		while (*s == c && *s)
			s++;
		len = 0;
		while (*s != c && *s && ++len)
			s++;
		str[index++] = ft_substr(s - len, 0, len);
		if (freeall(str[index - 1], str))
			return (NULL);
	}
	return (str);
}
