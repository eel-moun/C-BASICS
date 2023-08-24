/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-moun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 16:53:20 by eel-moun          #+#    #+#             */
/*   Updated: 2021/11/11 11:55:40 by eel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!*needle)
		return ((char *)haystack);
	while (i < len && haystack[i] && needle[j])
	{
		if (haystack[i] != needle[j])
			j = 0;
		if (haystack[i] == needle[j])
			j++;
		i++;
		if (haystack[i] != needle[j] && needle[j])
		{
			i = i - j + 1;
			j = 0;
		}
	}
	if (needle[j] == 0)
		return ((char *)haystack + i - j);
	return (NULL);
}
