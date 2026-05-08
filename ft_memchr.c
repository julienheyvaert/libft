/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jheyvaer <jheyvaer@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 13:30:03 by jheyvaer          #+#    #+#             */
/*   Updated: 2026/05/07 19:35:05 by jheyvaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*char_s;

	char_s = s;
	while (n--)
	{
		if (*char_s == (unsigned char)c)
			return ((void *)char_s);
		char_s++;
	}
	return (NULL);
}
