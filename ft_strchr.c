/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jheyvaer <jheyvaer@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 12:33:46 by jheyvaer          #+#    #+#             */
/*   Updated: 2026/04/17 00:33:42 by jheyvaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (NULL);
}

// int	main(void)
// {
// 	char	testchar[] = "Ceci est un ordinateur";

// 	printf("result1=%s\n", ft_strchr(testchar, 'n'));
// 	printf("result2=%s\n", ft_strchr(testchar, 'b'));
// 	printf("result3=%s\n", ft_strchr(testchar, '\0'));
// 	return (0);
// }