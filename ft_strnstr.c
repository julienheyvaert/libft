/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jheyvaer <jheyvaer@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 13:42:20 by jheyvaer          #+#    #+#             */
/*   Updated: 2026/04/20 09:15:29 by jheyvaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (needle[0] == '\0')
		return ((char *)haystack);
	i = 0;
	while (haystack[i] && i < len)
	{
		if (haystack[i] == needle[0])
		{
			j = 0;
			while (needle[j] && needle[j] == haystack[i + j] && (i + j) < len)
				j++;
			if (!needle[j])
				return ((char *)&haystack[i]);
		}
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	printf("%s\n", ft_strnstr("Un ordinateur", "ordi", 4));
// 	printf("%s\n", ft_strnstr("Un ordinateur", "ordi", 10));
// 	return (0);
// }
