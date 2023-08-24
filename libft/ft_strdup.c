/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-moun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 13:41:35 by eel-moun          #+#    #+#             */
/*   Updated: 2021/11/13 12:41:31 by eel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t	i;
	char	*cpstr;

	i = 0;
	cpstr = ft_calloc(ft_strlen((char *)str) + 1, 1);
	if (!cpstr)
		return (NULL);
	while (i < ft_strlen(str))
	{
		cpstr[i] = str[i];
		i++;
	}
	return (cpstr);
}
