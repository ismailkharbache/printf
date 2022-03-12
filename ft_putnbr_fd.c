/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikharbac <ikharbac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 04:53:58 by ikharbac          #+#    #+#             */
/*   Updated: 2021/12/08 18:32:53 by ikharbac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_fd(long n, int fd, int *len)
{
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		(*len)++;
		ft_putnbr_fd(-n, fd, len);
	}
	else if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd, len);
		ft_putnbr_fd(n % 10, fd, len);
	}
	else
	{
		ft_putchar_fd(n + 48, fd);
		(*len)++;
	}
}
