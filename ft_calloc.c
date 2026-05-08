/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jheyvaer <jheyvaer@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 14:52:37 by jheyvaer          #+#    #+#             */
/*   Updated: 2026/05/07 19:33:38 by jheyvaer         ###   ########.fr       */
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
