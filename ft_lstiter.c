/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jheyvaer <jheyvaer@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 18:04:08 by jheyvaer          #+#    #+#             */
/*   Updated: 2026/04/17 00:32:31 by jheyvaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

// static void	add_one(void *content)
// {
// 	char	*str;

// 	str = (char *)content;
// 	while (*str)
// 		*str++ += 1;
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
// 	ft_lstiter(node1, &add_one);
// 	current_node = node1;
// 	while (current_node)
// 	{
// 		printf("%s -- ", (char *)current_node->content);
// 		current_node = current_node->next;
// 	}
// 	printf("\n");
// 	return (0);
// }
