/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jheyvaer <jheyvaer@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 13:45:32 by jheyvaer          #+#    #+#             */
/*   Updated: 2026/04/17 00:33:16 by jheyvaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*b_u_char;

	b_u_char = (unsigned char *)b;
	while (len--)
		*b_u_char++ = (unsigned char)c;
	return (b);
}

// int	main(void)
// {
// 	char	test_str[11] = "test";

// 	ft_memset(test_str + 4, 65, 6);
// 	printf("%s\n", test_str);
// 	return (0);
// }
