/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jheyvaer <jheyvaer@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 17:55:53 by jheyvaer          #+#    #+#             */
/*   Updated: 2026/04/17 00:32:52 by jheyvaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	size;

	size = 0;
	while (lst)
	{
		size++;
		lst = lst->next;
	}
	return (size);
}

// int	main(void)
// {
// 	t_list	*node1;
// 	t_list	*node2;
// 	t_list	*node3;

// 	node1 = ft_lstnew("1");
// 	node2 = ft_lstnew("2");
// 	node3 = ft_lstnew("3");

// 	node1->next = node2;
// 	node2->next = node3;
// 	node3->next = NULL;

// 	printf("%d\n", ft_lstsize(node1));
// 	return (0);
// }
