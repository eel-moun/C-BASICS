/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-moun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 11:27:34 by eel-moun          #+#    #+#             */
/*   Updated: 2021/11/17 06:23:03 by eel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	if (!s)
		return (NULL);
	i = 0;
	if (ft_strlen(s) < start)
	{
		str = ft_calloc(1, 1);
		return (str);
	}
	if (ft_strlen(s + start) + 1 < len)
		str = ft_calloc(ft_strlen(s + start) + 1, 1);
	else
		str = ft_calloc(len + 1, 1);
	if (!str)
		return (NULL);
	while (i < len && s[start + i])
	{
		str[i] = s[start + i];
		i++;
	}
	return (str);
}
