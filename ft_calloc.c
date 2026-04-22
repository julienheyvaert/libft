/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jheyvaer <jheyvaer@student.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 14:52:37 by jheyvaer          #+#    #+#             */
/*   Updated: 2026/04/17 14:09:06 by jheyvaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*allocated;

	if (size != 0 && count > __SIZE_MAX__ / size)
		return (NULL);
	allocated = malloc(count * size);
	if (!allocated)
		return (NULL);
	ft_bzero(allocated, count * size);
	return (allocated);
}

// int	main(void)
// {
// 	int	*array;
// 	int	i;

// 	array = ft_calloc(5, sizeof(int));
// 	i = 0;
// 	while (i < 5)
// 	{
// 		printf("%d ", array[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	free(array);
// 	return (0);
// }
