/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jheyvaer <jheyvaer@student.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 17:52:27 by jheyvaer          #+#    #+#             */
/*   Updated: 2026/04/17 15:39:30 by jheyvaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (!dst && !src)
		return (NULL);
	d = dst;
	s = src;
	while (n--)
		*d++ = *s++;
	return (dst);
}

// int	main(void)
// {
// 	int	array[4];
// 	int	*dst;
// 	int	i;

// 	array[0] = 1;
// 	array[1] = 2;
// 	array[2] = 3;
// 	array[3] = 4;
// 	dst = malloc(sizeof(int) * 4);
// 	ft_memcpy(dst, array, sizeof(array));
// 	i = 0;
// 	while (i < 4)
// 		printf("%d ", dst[i++]);
// 	printf("\n");
// 	free(dst);
// 	return (0);
// }
