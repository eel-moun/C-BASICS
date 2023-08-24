/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-moun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 20:03:25 by eel-moun          #+#    #+#             */
/*   Updated: 2021/11/18 18:57:04 by eel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*str;
	const char	*strsrc;

	i = 0;
	str = (char *)dst;
	strsrc = (const char *)src;
	if (!str && !strsrc)
		return (NULL);
	while (i < n)
	{
		str[i] = strsrc[i];
		i++;
	}
	return (str);
}
