/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jheyvaer <jheyvaer@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 18:00:43 by jheyvaer          #+#    #+#             */
/*   Updated: 2026/04/17 00:32:27 by jheyvaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

// static void	del_node_content(void *content)
// {
// 	if (content)
// 		free(content);
// }

// int	main(void)
// {
// 	t_list	*node;

// 	node = ft_lstnew(ft_strdup("a node"));
// 	printf("node content=%s\n", (char *)node->content);
// 	ft_lstdelone(node, &del_node_content);
// 	printf("node content=%s\n", (char *)node->content);
// 	return (0);
// }