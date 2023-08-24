/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-moun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 02:53:11 by eel-moun          #+#    #+#             */
/*   Updated: 2022/02/16 17:43:34 by eel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include<unistd.h>
# include<stdlib.h>
# include<stdarg.h>
# include<stdio.h>

void	ft_put_u(unsigned int num, int *count);
int		ft_putchar(char c);
int		ft_putstr(char *s);
void	ft_putnbr(int n, int *count);
int		ft_count(int nbr);
void	ft_hex(unsigned long nb, int format, int *i);
int		ft_printf(const char *str, ...);
int		check_flag(char c, va_list ptr);
void	ft_putchar_hex(char c, int *i);

#endif
