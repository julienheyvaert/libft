/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jheyvaer <jheyvaer@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 12:27:18 by jheyvaer          #+#    #+#             */
/*   Updated: 2026/04/17 00:34:43 by jheyvaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

// int	main(void)
// {
// 	printf("%c\n", ft_toupper('a'));
// 	printf("%c\n", ft_toupper('B'));
// 	printf("%c\n", ft_toupper('.'));
// 	return (0);
// }
