/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-moun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 12:13:47 by eel-moun          #+#    #+#             */
/*   Updated: 2021/11/18 19:05:49 by eel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	check_front(char const *s1, char const *set)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (set[j])
	{
		if (set[j] == s1[i])
		{
			i++;
			j = -1;
		}
		j++;
	}
	return (i);
}

static int	check_back(char const *s1, char const *set)
{
	int	i;
	int	j;

	i = ft_strlen(s1) - 1;
	j = 0;
	if (check_front(s1, set) > i)
		return (i);
	while (set[j])
	{
		if (set[j] == s1[i])
		{
			i--;
			j = -1;
		}
		j++;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	char	*str;
	size_t	size;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	size = check_back(s1, set) - check_front(s1, set) + 2;
	str = ft_calloc(size, 1);
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1 + check_front(s1, set), size);
	return (str);
}
