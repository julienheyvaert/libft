/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jheyvaer <jheyvaer@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 17:30:57 by jheyvaer          #+#    #+#             */
/*   Updated: 2026/04/22 14:56:16 by jheyvaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	unsigned int	i;
	size_t			s_length;

	if (!s)
		return (NULL);
	s_length = ft_strlen(s);
	if (start >= s_length)
		return (ft_strdup(""));
	if (len > s_length - start)
		len = s_length - start;
	sub = malloc(sizeof(char) * (len + 1));
	if (!sub)
		return (NULL);
	i = 0;
	while (i < len)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}

// int	main(void)
// {
// 	printf("result = %s\n", ft_substr("One Two Three", 4, 3));
// 	printf("result = %s\n", ft_substr("One Two Three", 4, 30));
// 	printf("result = %s\n", ft_substr("", 4, 3));
// 	return (0);
// }