/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jheyvaer <jheyvaer@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 17:34:52 by jheyvaer          #+#    #+#             */
/*   Updated: 2026/04/17 00:33:51 by jheyvaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// static void	upper_even(unsigned int i, char *c)
// {
// 	if ((i % 2) == 0 && (*c >= 'a' && *c <= 'z'))
// 		*c -= 32;
// }

// int	main(void)
// {
// 	char	str[] = "abcdef";

// 	ft_striteri(str, &upper_even);
// 	printf("%s\n", str);
// 	return (0);
// }
