/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jheyvaer <jheyvaer@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 13:40:32 by jheyvaer          #+#    #+#             */
/*   Updated: 2026/04/17 00:31:41 by jheyvaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}

// int	main(void)
// {
// 	printf("%d\n", ft_isprint(' '));
// 	printf("%d\n", ft_isprint('z'));
// 	printf("%d\n", ft_isprint('\t'));
// 	return (0);
// }