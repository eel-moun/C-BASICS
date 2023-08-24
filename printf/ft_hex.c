/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-moun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 14:19:42 by eel-moun          #+#    #+#             */
/*   Updated: 2022/02/17 14:20:13 by eel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#define HEXA "0123456789abcdef"
#define HEXO "0123456789ABCDEF"

void	ft_hex(unsigned long nb, int format, int *i)
{
	if (nb > 15)
		ft_hex(nb / 16, format, i);
	if (format == 1)
		ft_putchar_hex(HEXA[nb % 16], i);
	else
		ft_putchar_hex(HEXO[nb % 16], i);
}
