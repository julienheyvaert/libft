/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jheyvaer <jheyvaer@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 12:36:07 by jheyvaer          #+#    #+#             */
/*   Updated: 2026/04/17 00:34:26 by jheyvaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	if (s[i] == (char)c)
		return ((char *)&s[i]);
	while (i--)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	testchar[] = "Ceci est un ordinateur";

// 	printf("result1=%s\n", ft_strrchr(testchar, 'n'));
// 	printf("result2=%s\n", ft_strrchr(testchar, 'b'));
// 	printf("result3=%s\n", ft_strrchr(testchar, '\0'));
// 	return (0);
// }