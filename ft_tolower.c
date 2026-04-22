/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jheyvaer <jheyvaer@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 12:32:19 by jheyvaer          #+#    #+#             */
/*   Updated: 2026/04/17 00:34:39 by jheyvaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}

// int	main(void)
// {
// 	printf("%c\n", ft_tolower('a'));
// 	printf("%c\n", ft_tolower('B'));
// 	printf("%c\n", ft_tolower('.'));
// 	return (0);
// }