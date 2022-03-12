/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikharbac <ikharbac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 14:11:20 by ikharbac          #+#    #+#             */
/*   Updated: 2021/12/08 19:51:27 by ikharbac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

static void	ft_check(const char type, int *len, va_list ptr)
{
	if (type == '%')
		(*len) += ft_putchar_fd('%', 1);
	else if (type == 's')
		(*len) += ft_putstr_fd(va_arg(ptr, char *), 1);
	else if (type == 'c')
		(*len) += ft_putchar_fd(va_arg(ptr, int), 1);
	else if (type == 'X')
		ft_tohexa_upper(va_arg(ptr, int), len);
	else if (type == 'x')
		ft_tohexa_lower(va_arg(ptr, int), len);
	else if (type == 'd' || type == 'i')
		ft_putnbr_fd(va_arg(ptr, int), 1, len);
	else if (type == 'u')
		ft_putnbr_u(va_arg(ptr, unsigned int), 1, len);
	else if (type == 'p')
	{
		(*len) += ft_putstr_fd("0x", 1);
		ft_tohexa_p(va_arg(ptr, unsigned long), len);
	}
}

int	ft_printf(const char *format, ...)
{
	va_list	ptr;
	int		len;

	va_start(ptr, format);
	len = 0;
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			ft_check(*format, &len, ptr);
		}
		else
			len += ft_putchar_fd(format[0], 1);
		format++;
	}
	va_end(ptr);
	return (len);
}
