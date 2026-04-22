/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jheyvaer <jheyvaer@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 17:36:59 by jheyvaer          #+#    #+#             */
/*   Updated: 2026/04/17 00:33:28 by jheyvaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	number;

	number = n;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		number = -number;
	}
	if (number < 10)
		ft_putchar_fd(number + '0', fd);
	else
	{
		ft_putnbr_fd(number / 10, fd);
		ft_putchar_fd((number % 10) + '0', fd);
	}
}

// int	main(void)
// {
// 	ft_putnbr_fd(-2147483648, 1);
// 	return (0);
// }