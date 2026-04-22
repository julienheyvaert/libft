/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jheyvaer <jheyvaer@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 16:03:01 by jheyvaer          #+#    #+#             */
/*   Updated: 2026/04/17 00:27:18 by jheyvaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return ((c >= '0' && c <= '9')
		|| (c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z'));
}

// int	main(void)
// {
// 	printf("%d\n", ft_isalnum('?'));
// 	printf("%d\n", ft_isalnum('a'));
// 	printf("%d\n", ft_isalnum('1'));
// 	return (0);
// }