/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jheyvaer <jheyvaer@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 13:16:22 by jheyvaer          #+#    #+#             */
/*   Updated: 2026/05/07 22:43:52 by jheyvaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	process_pct(int fd, char var_type, va_list *ap)
{
	if (var_type == 'c')
		return (ft_putchar_c(fd, va_arg(*ap, int)));
	else if (var_type == 's')
		return (ft_putstr_c(fd, va_arg(*ap, char *)));
	else if (var_type == 'p')
		return (putptr(fd, va_arg(*ap, void *)));
	else if (var_type == 'd' || var_type == 'i')
		return (putnbr_signed(fd, (long)va_arg(*ap, int), "0123456789"));
	else if (var_type == 'u')
		return (putnbr_unsigned(fd, va_arg(*ap, unsigned int), "0123456789"));
	else if (var_type == 'x')
		return (putnbr_unsigned(fd, va_arg(*ap, unsigned int),
				"0123456789abcdef"));
	else if (var_type == 'X')
		return (putnbr_unsigned(fd, va_arg(*ap, unsigned int),
				"0123456789ABCDEF"));
	else if (var_type == 'f')
		return (putnbr_double(fd, va_arg(*ap, double), "0123456789"));
	else if (var_type == '%')
		return (ft_putchar_c(fd, '%'));
	if (write(fd, "%", 1) == -1)
		return (-1);
	if (write(fd, &var_type, 1) == -1)
		return (-1);
	return (2);
}

static int	parser(int fd, const char *s, va_list *ap)
{
	int	count;
	int	process_pct_res;

	count = 0;
	while (*s)
	{
		if (*s == '%' && *(s + 1))
		{
			s++;
			process_pct_res = process_pct(fd, *s, ap);
			if (process_pct_res == -1)
				return (-1);
			count += process_pct_res;
		}
		else
		{
			if (*s == '%' && !(*(s + 1)))
				return (count);
			if (write(fd, s, 1) == -1)
				return (-1);
			count++;
		}
		s++;
	}
	return (count);
}

int	ft_printf(int fd, const char *s, ...)
{
	va_list	ap;
	int		count;

	if (fd < 0)
		return (-1);
	if (!s)
		return (-1);
	va_start(ap, s);
	count = parser(fd, s, &ap);
	va_end(ap);
	return (count);
}
