/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jheyvaer <jheyvaer@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 17:57:09 by jheyvaer          #+#    #+#             */
/*   Updated: 2026/04/17 00:32:37 by jheyvaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
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

// 	printf("%s\n", (char *)ft_lstlast(node1)->content);
// 	return (0);
// }