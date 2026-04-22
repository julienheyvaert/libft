/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jheyvaer <jheyvaer@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 12:37:44 by jheyvaer          #+#    #+#             */
/*   Updated: 2026/04/22 14:55:35 by jheyvaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] && s2[i] && i < n)
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	if (i == n)
		return (0);
	return ((int)((unsigned char)s1[i] - (unsigned char)s2[i]));
}

// int	main(void)
// {
// 	printf("%d\n", ft_strncmp("hello", "hello", 5));
// 	printf("%d\n", ft_strncmp("hello", "hello world", 5));
// 	printf("%d\n", ft_strncmp("hello", "hello world", 11));
// 	printf("%d\n", ft_strncmp("", "", 1));
// 	return (0);
// }
