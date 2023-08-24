/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-moun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 14:11:53 by eel-moun          #+#    #+#             */
/*   Updated: 2022/02/17 15:43:20 by eel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar_hex(char c, int	*i)
{
	write(1, &c, 1);
	(*i)++;
}

int	check_flag(char c, va_list ptr)
{
	int	j;

	j = 0;
	if (c == 'i' || c == 'd')
		ft_putnbr(va_arg(ptr, int), &j);
	if (c == 'c')
		j = ft_putchar(va_arg(ptr, int));
	if (c == 's')
		j = ft_putstr(va_arg(ptr, char *));
	if (c == '%')
		j = write(1, "%", 1);
	if (c == 'p')
	{
		j = ft_putstr("0x");
		ft_hex(va_arg(ptr, unsigned long), 1, &j);
	}
	if (c == 'x')
		ft_hex(va_arg(ptr, unsigned int), 1, &j);
	if (c == 'X')
		ft_hex(va_arg(ptr, unsigned int), 2, &j);
	if (c == 'u')
		ft_put_u(va_arg(ptr, unsigned int), &j);
	return (j);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	ptr;

	i = 0;
	va_start(ptr, str);
	while (*str)
	{
		while (*str != '%' && *str != '\0')
		{
			i = i + write(1, str, 1);
			str++;
		}
		if (*str == '%')
		{
			str++;
			i = i + check_flag(*str, ptr);
			str++;
		}
	}
	va_end(ptr);
	return (i);
}
