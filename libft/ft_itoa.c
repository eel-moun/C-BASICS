/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-moun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 14:35:38 by eel-moun          #+#    #+#             */
/*   Updated: 2021/11/20 12:56:32 by eel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_size(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n = n * (-1);
		i++;
	}
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int			i;
	char		*str;
	int			j;
	long int	num;

	num = n;
	i = 0;
	j = ft_size(num);
	str = ft_calloc(j + 1, sizeof(char));
	if (!str)
		return (NULL);
	if (num < 0)
	{
		num = num * (-1);
		str[i] = '-';
	}
	i = j - 1;
	while (i >= 0 && !(n < 0 && i == 0))
	{
		str[i] = (num % 10) + 48;
		i--;
		num = num / 10;
	}
	return (str);
}
