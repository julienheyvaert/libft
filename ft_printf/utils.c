/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jheyvaer <jheyvaer@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 13:16:47 by jheyvaer          #+#    #+#             */
/*   Updated: 2026/05/07 21:09:44 by jheyvaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_strlen(const char *s)
{
	size_t	length;

	if (!s)
		return (0);
	length = 0;
	while (s[length])
		length++;
	return (length);
}

int	ft_putchar_c(int fd, char c)
{
	return (write(fd, &c, 1));
}

int	ft_putstr_c(int fd, char const *s)
{
	if (!s)
		return (write(fd, "(null)", 6));
	return (write(fd, s, ft_strlen(s)));
}

int	putptr(int fd, void	*ptr)
{
	int	res;
	int	count;

	if (!ptr)
		return (ft_putstr_c(fd, "(nil)"));
	count = write(fd, "0x", 2);
	if (count == -1)
		return (-1);
	res = putnbr_unsigned(fd, (unsigned long)ptr, "0123456789abcdef");
	return (count + res);
}
