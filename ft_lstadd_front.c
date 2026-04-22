/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jheyvaer <jheyvaer@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 17:53:41 by jheyvaer          #+#    #+#             */
/*   Updated: 2026/04/17 00:31:31 by jheyvaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

// int	main(void)
// {
// 	t_list	*node1;
// 	t_list	*node2;
// 	t_list	*node3;
// 	t_list	*new_node;
// 	t_list	**lst;
// 	t_list	*current_node;

// 	node1 = ft_lstnew("1");
// 	node2 = ft_lstnew("2");
// 	node3 = ft_lstnew("3");

// 	node1->next = node2;
// 	node2->next = node3;
// 	node3->next = NULL;

// 	new_node = ft_lstnew("0");

// 	lst = &node1;
// 	current_node = *lst;
// 	while (current_node)
// 	{
// 		printf("%s -- ", (char *)current_node->content);
// 		current_node = current_node->next;
// 	}
// 	printf("\n");

// 	ft_lstadd_front(lst, new_node);
// 	current_node = *lst;
// 	while (current_node)
// 	{
// 		printf("%s -- ", (char *)current_node->content);
// 		current_node = current_node->next;
// 	}
// 	printf("\n");
// 	return (0);
// }
