/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jheyvaer <jheyvaer@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 17:31:56 by jheyvaer          #+#    #+#             */
/*   Updated: 2026/04/17 00:33:56 by jheyvaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	length;
	char	*joined;

	if (!s1 && s2)
		return (ft_strdup(s2));
	if (!s2 && s1)
		return (ft_strdup(s1));
	if (!s1 && !s2)
		return (NULL);
	length = ft_strlen(s1) + ft_strlen(s2);
	joined = malloc(sizeof(char) * (length + 1));
	if (!joined)
		return (NULL);
	ft_strlcpy(joined, s1, ft_strlen(s1) + 1);
	ft_strlcat(joined, s2, length + 1);
	return (joined);
}

// int	main(void)
// {
// 	printf("%s\n", ft_strjoin("hello ", "world"));
// 	return (0);
// }