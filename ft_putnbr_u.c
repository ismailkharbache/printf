/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikharbac <ikharbac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 04:53:58 by ikharbac          #+#    #+#             */
/*   Updated: 2021/12/07 21:11:43 by ikharbac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_u(long n, int fd, int *len)
{
	if (n < 0)
	{
		n = 4294967295 + n;
		ft_putnbr_u(n, fd, len);
	}
	else if (n >= 10)
	{
		ft_putnbr_u(n / 10, fd, len);
		ft_putnbr_u(n % 10, fd, len);
	}
	else
	{
		ft_putchar_fd(n + 48, fd);
		(*len)++;
	}
}
