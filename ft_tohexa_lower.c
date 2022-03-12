/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tohexa_lower.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikharbac <ikharbac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 20:10:30 by ikharbac          #+#    #+#             */
/*   Updated: 2021/12/07 20:13:48 by ikharbac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_tohexa_lower(unsigned int base10, int *len)
{
	char	*hexa;

	hexa = "0123456789abcdef";
	if (base10 <= 15)
	{
		ft_putchar_fd (hexa[base10], 1);
		(*len)++;
	}
	else
	{
		ft_tohexa_lower (base10 / 16, len);
		ft_tohexa_lower (base10 % 16, len);
	}	
}
