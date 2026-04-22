/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jheyvaer <jheyvaer@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 16:10:31 by jheyvaer          #+#    #+#             */
/*   Updated: 2026/04/20 13:53:58 by jheyvaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*duplicate;
	size_t	i;

	duplicate = malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (!duplicate)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		duplicate[i] = s1[i];
		i++;
	}
	duplicate[i] = '\0';
	return (duplicate);
}

// int	main(void)
// {
// 	char	str[3];

// 	str[0] = 'O';
// 	str[1] = 'K';
// 	str[2] = '\0';
// 	printf("%s\n", ft_strdup(str));
// 	return (0);
// }
