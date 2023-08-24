/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-moun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 16:02:28 by eel-moun          #+#    #+#             */
/*   Updated: 2021/11/19 11:10:09 by eel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	char	*strcheck;

	strcheck = (char *)str;
	while (n--)
	{
		if (*strcheck == (char)c)
			return (strcheck);
		strcheck++;
	}
	return (NULL);
}
