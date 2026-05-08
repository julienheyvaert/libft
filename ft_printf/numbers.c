/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numbers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jheyvaer <jheyvaer@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 13:16:39 by jheyvaer          #+#    #+#             */
/*   Updated: 2026/05/07 22:41:25 by jheyvaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	putnbr_signed(int fd, long n, char *base)
{
	int	res;
	int	count;

	count = 0;
	if (n < 0)
	{
		if (write(fd, "-", 1) == -1)
			return (-1);
		count++;
		n = -n;
	}
	res = putnbr_unsigned(fd, (unsigned long)(n), base);
	if (res == -1)
		return (-1);
	return (count + res);
}

int	putnbr_unsigned(int fd, unsigned long n, char *base)
{
	size_t	base_len;
	int		count;
	int		res;

	base_len = ft_strlen(base);
	count = 0;
	if ((n / base_len))
	{
		res = putnbr_unsigned(fd, n / base_len, base);
		if (res == -1)
			return (-1);
		count += res;
	}
	if (write(fd, &base[n % base_len], 1) == -1)
		return (-1);
	count++;
	return (count);
}

static int	put_fractional(int fd, double fractional_part, char *base)
{
	int		count;
	int		i;

	count = 0;
	if (write(fd, ".", 1) == -1)
		return (-1);
	count++;
	i = 2;
	while (i--)
	{
		fractional_part *= 10;
		if (write(fd, &base[(int)fractional_part % 10], 1) == -1)
			return (-1);
		count++;
	}
	return (count);
}

int	putnbr_double(int fd, double n, char *base)
{
	long	integer_part;
	int		count;
	int		res;

	count = 0;
	if (n < 0)
	{
		if (write(fd, "-", 1) == -1)
			return (-1);
		count++;
		n = -n;
	}
	integer_part = (long)n;
	res = putnbr_signed(fd, integer_part, base);
	if (res == -1)
		return (-1);
	count += res;
	res = put_fractional(fd, n - integer_part, base);
	if (res == -1)
		return (-1);
	return (count + res);
}
