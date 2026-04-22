/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jheyvaer <jheyvaer@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 17:58:19 by jheyvaer          #+#    #+#             */
/*   Updated: 2026/04/22 14:35:12 by jheyvaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst)
		return ;
	if (!(*lst))
		*lst = new;
	else
	{
		last = *lst;
		while (last->next)
			last = last->next;
		last->next = new;
	}
}

// int	main(void)
// {
// 	t_list	*node1;
// 	t_list	*node2;
// 	t_list	*node3;
// 	t_list	*new_node;
// 	t_list	*current_node;

// 	node1 = ft_lstnew("1");
// 	node2 = ft_lstnew("2");
// 	node3 = ft_lstnew("3");
// 	new_node = ft_lstnew("new");

// 	node1->next = node2;
// 	node2->next = node3;
// 	node3->next = NULL;

// 	ft_lstadd_back(&node1, new_node);
// 	current_node = node1;
// 	while (current_node)
// 	{
// 		printf("%s -- ", (char *)current_node->content);
// 		current_node = current_node->next;
// 	}
// 	return (0);
// }
