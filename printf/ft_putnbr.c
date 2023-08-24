/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-moun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 14:20:48 by eel-moun          #+#    #+#             */
/*   Updated: 2022/02/17 14:20:53 by eel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int n, int *count)
{
	long int	num;

	num = n;
	if (num < 0)
	{
		num = -num;
		*count += ft_putchar('-');
	}
	if (num < 10)
		*count += ft_putchar(num + 48);
	else
	{
		ft_putnbr(num / 10, count);
		ft_putnbr(num % 10, count);
	}
}

void	ft_put_u(unsigned int num, int *count)
{
	unsigned long	n;

	n = num;
	if (n < 10)
		ft_putchar_hex(n + 48, count);
	else
	{	
		ft_putnbr(n / 10, count);
		ft_putnbr(n % 10, count);
	}
}
