/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tohexa_upper.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikharbac <ikharbac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 20:10:30 by ikharbac          #+#    #+#             */
/*   Updated: 2021/12/07 20:53:11 by ikharbac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_tohexa_upper(unsigned int base10, int *len)
{
	char	*hexa1;

	hexa1 = "0123456789ABCDEF";
	if (base10 <= 15)
	{
		ft_putchar_fd (hexa1[base10], 1);
		(*len)++;
	}
	else
	{
		ft_tohexa_upper (base10 / 16, len);
		ft_tohexa_upper (base10 % 16, len);
	}
}
