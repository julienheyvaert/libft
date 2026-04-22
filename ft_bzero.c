/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jheyvaer <jheyvaer@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 13:47:14 by jheyvaer          #+#    #+#             */
/*   Updated: 2026/04/17 00:31:57 by jheyvaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

// int	main(void)
// {
// 	int	array[5];
// 	int	i;

// 	array[0] = 1;
// 	array[1] = 2;
// 	array[2] = 3;
// 	array[3] = 4;
// 	array[4] = 5;

// 	i = 0;
// 	while (i < 5)
// 		printf("%d -- ", array[i++]);
// 	printf("\n");
// 	ft_bzero(array, sizeof(int) * 3);
// 	i = 0;
// 	while (i < 5)
// 		printf("%d -- ", array[i++]);
// 	printf("\n");
// 	return (0);
// }
