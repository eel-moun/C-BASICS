/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-moun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 16:26:23 by eel-moun          #+#    #+#             */
/*   Updated: 2021/11/18 18:56:30 by eel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	int				i;
	unsigned char	*str1cmp;
	unsigned char	*str2cmp;

	i = 0;
	str1cmp = (unsigned char *)str1;
	str2cmp = (unsigned char *)str2;
	if (!str1cmp && !str2cmp)
		return (0);
	while (n && str1cmp[i] == str2cmp[i])
	{
		i++;
		n--;
	}
	if (n)
		return (str1cmp[i] - str2cmp[i]);
	return (0);
}
