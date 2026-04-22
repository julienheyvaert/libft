/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jheyvaer <jheyvaer@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 19:21:18 by jheyvaer          #+#    #+#             */
/*   Updated: 2026/04/17 00:34:04 by jheyvaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize > 0)
	{
		while (src[i] && (i < dstsize - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	while (src[i])
		i++;
	return (i);
}

// int	main(void)
// {
// 	char	destination[5];
// 	size_t	result;

// 	result = ft_strlcpy(destination, "test", 5);
// 	printf("result=%s, size=%zu\n", destination, result);
// 	return (0);
// }
