/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jheyvaer <jheyvaer@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 17:34:14 by jheyvaer          #+#    #+#             */
/*   Updated: 2026/04/20 11:11:09 by jheyvaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*result;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	result = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (s[i])
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}

// static char	upper_even(unsigned int i, char c)
// {
// 	if ((i % 2) == 0 && (c >= 'a' && c <= 'z'))
// 		c -= 32;
// 	return (c);
// }

// int	main(void)
// {
// 	printf("%s\n", ft_strmapi("abcdefghijklmnop", &upper_even));
// 	return (0);
// }