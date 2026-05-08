/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jheyvaer <jheyvaer@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 13:16:30 by jheyvaer          #+#    #+#             */
/*   Updated: 2026/05/07 22:36:13 by jheyvaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <limits.h>

// utils.c
size_t	ft_strlen(const char *s);
int		ft_putchar_c(int fd, char c);
int		ft_putstr_c(int fd, char const *s);
int		putptr(int fd, void	*ptr);

// numbers.c
int		putnbr_signed(int fd, long n, char *base);
int		putnbr_unsigned(int fd, unsigned long n, char *base);
int		putnbr_double(int fd, double n, char *base);

// ft_printf.c
int		ft_printf(int fd, const char *s, ...);

#endif