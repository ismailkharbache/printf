/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikharbac <ikharbac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 19:25:59 by ikharbac          #+#    #+#             */
/*   Updated: 2021/12/08 20:02:01 by ikharbac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *format, ...);
int		ft_putchar_fd(char c, int fd);
int		ft_putstr_fd(char *s, int fd);
void	ft_tohexa_lower(unsigned int base10, int *len);
void	ft_tohexa_upper(unsigned int base10, int *len);
void	ft_tohexa_p(unsigned long base10, int *len);
void	ft_putnbr_fd(long n, int fd, int *len);
void	ft_putnbr_u(long n, int fd, int *len);
#endif