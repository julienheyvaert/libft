/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jheyvaer <jheyvaer@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 19:31:25 by jheyvaer          #+#    #+#             */
/*   Updated: 2026/04/17 00:34:00 by jheyvaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	src_length;
	size_t	dst_length;
	size_t	i;

	src_length = ft_strlen(src);
	dst_length = 0;
	while (dst_length < dstsize && dst[dst_length])
		dst_length++;
	if (dst_length == dstsize)
		return (dstsize + src_length);
	i = 0;
	while (src[i] && (dst_length + i < dstsize - 1))
	{
		dst[dst_length + i] = src[i];
		i++;
	}
	dst[dst_length + i] = '\0';
	return (dst_length + src_length);
}

// int	main(void)
// {
// 	char	buffer[20];

// 	buffer[0] = 'E';
// 	buffer[1] = 'c';
// 	buffer[2] = 'o';
// 	buffer[3] = 'l';
// 	buffer[4] = 'e';
// 	buffer[5] = ' ';
// 	buffer[6] = '\0';
// 	ft_strlcat(buffer, "42", 20);
// 	printf("%s\n", buffer);
// 	return (0);
// }
