/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-moun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 13:34:39 by eel-moun          #+#    #+#             */
/*   Updated: 2021/11/13 12:48:20 by eel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len )
{
	size_t	i;
	char	*strdst;
	char	*strsrc;

	i = 0;
	strdst = (char *)dst;
	strsrc = (char *)src;
	if (!strdst && !strsrc)
		return (NULL);
	if (src < dst)
	{
		while (len--)
		{
			strdst[len] = strsrc[len];
		}
	}
	else
	{
		while (i < len)
		{
			strdst[i] = strsrc[i];
			i++;
		}
	}
	return (strdst);
}
