/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jheyvaer <jheyvaer@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 17:32:43 by jheyvaer          #+#    #+#             */
/*   Updated: 2026/04/17 00:34:30 by jheyvaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	is_in_str(char c, char const *str)
{
	while (*str)
	{
		if (c == *str++)
			return (1);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	n;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && is_in_str(*s1, set))
		s1++;
	n = ft_strlen(s1);
	while (n > 0 && is_in_str(s1[n - 1], set))
		n--;
	return (ft_substr(s1, 0, n));
}

// int	main(void)
// {
// 	printf("result=%s\n", ft_strtrim("  un test()", " ()"));
// 	printf("result=%s\n", ft_strtrim("aaa", "a"));
// 	return (0);
// }