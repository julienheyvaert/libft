/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jheyvaer <jheyvaer@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 12:36:07 by jheyvaer          #+#    #+#             */
/*   Updated: 2026/05/07 19:36:12 by jheyvaer         ###   ########.fr       */
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
