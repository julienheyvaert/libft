/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jheyvaer <jheyvaer@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 16:03:13 by jheyvaer          #+#    #+#             */
/*   Updated: 2026/04/17 00:27:24 by jheyvaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

// int	main(void)
// {
// 	printf("%d\n", ft_isascii('a'));
// 	printf("%d\n", ft_isascii(' '));
// 	printf("%d\n", ft_isascii(128));
// 	return (0);
// }