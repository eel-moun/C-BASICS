/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-moun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 13:07:30 by eel-moun          #+#    #+#             */
/*   Updated: 2021/11/18 18:58:26 by eel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *dest, int charac, size_t len)
{
	size_t	i;
	char	*test;

	test = (char *)dest;
	i = 0;
	while (i < len)
	{
		*test = charac;
		i++;
		test++;
	}
	return (test - i);
}
