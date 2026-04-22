/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jheyvaer <jheyvaer@student.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 12:54:38 by jheyvaer          #+#    #+#             */
/*   Updated: 2026/04/17 15:40:07 by jheyvaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (!dst && !src)
		return (NULL);
	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	if (d < s)
	{
		while (len--)
			*d++ = *s++;
	}
	else
	{
		while (len--)
			d[len] = s[len];
	}
	return (dst);
}

// int	main(void)
// {
// 	char	str[6];

// 	str[0] = 'H';
// 	str[1] = 'e';
// 	str[2] = 'l';
// 	str[3] = 'l';
// 	str[4] = 'o';
// 	str[5] = '\0';
// 	ft_memmove(str + 3, str, 2);
// 	printf("%s\n", str);
// 	return (0);
// }
