/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jheyvaer <jheyvaer@student.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 17:33:51 by jheyvaer          #+#    #+#             */
/*   Updated: 2026/04/17 15:30:15 by jheyvaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	number_length(int n)
{
	size_t	count;

	count = 1;
	while (n / 10 != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*s;
	size_t	length;
	long	number;

	length = number_length(n);
	if (n < 0)
		length += 1;
	s = malloc(sizeof(char) * (length + 1));
	if (!s)
		return (NULL);
	s[length] = '\0';
	number = n;
	if (number < 0)
	{
		s[0] = '-';
		number = -number;
	}
	while (number / 10 > 0)
	{
		s[--length] = (number % 10) + '0';
		number /= 10;
	}
	s[--length] = (number % 10) + '0';
	return (s);
}

// int	main(void)
// {
// 	printf("%s\n", ft_itoa(-2147483648));
// 	return (0);
// }
