/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jheyvaer <jheyvaer@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 18:02:31 by jheyvaer          #+#    #+#             */
/*   Updated: 2026/04/17 00:31:25 by jheyvaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next_node;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		next_node = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = next_node;
	}
	*lst = NULL;
}

// static void	del_node_content(void *content)
// {
// 		free(content);
// }

// int	main(void)
// {
// 	t_list	*node1;
// 	t_list	*node2;
// 	t_list	*node3;
// 	t_list	*current_node;

// 	node1 = ft_lstnew(ft_strdup("A"));
// 	node2 = ft_lstnew(ft_strdup("B"));
// 	node3 = ft_lstnew(ft_strdup("C"));
// 	node1->next = node2;
// 	node2->next = node3;
// 	node3->next = NULL;
// 	current_node = node1;
// 	while (current_node)
// 	{
// 		printf("%s -- ", (char *)current_node->content);
// 		current_node = current_node->next;
// 	}
// 	printf("\n");
// 	ft_lstclear(&node1, &del_node_content);
// 	current_node = node1;
// 	while (current_node)
// 	{
// 		printf("%s -- ", (char *)current_node->content);
// 		current_node = current_node->next;
// 	}
// 	printf("\n");
// 	return (0);
// }
