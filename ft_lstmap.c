/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jheyvaer <jheyvaer@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 18:07:05 by jheyvaer          #+#    #+#             */
/*   Updated: 2026/04/19 20:02:35 by jheyvaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	void	*new_content;

	if (!lst)
		return (NULL);
	new_list = NULL;
	new_node = NULL;
	while (lst)
	{
		new_content = f(lst->content);
		new_node = ft_lstnew(new_content);
		if (!new_node)
		{
			del(new_content);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}

// static void	*add_one_new(void *content)
// {
// 	char	*str;
// 	char	*new_str;
// 	int		i;

// 	str = (char *)content;
// 	new_str = ft_strdup(str);
// 	i = 0;
// 	while (str[i])
// 	{
// 		new_str[i] = str[i] + 1;
// 		i++;
// 	}
// 	new_str[i] = '\0';
// 	return (new_str);
// }

// static void	del_node_content(void *content)
// {
// 	free(content);
// }

// void	print_list(t_list *lst)
// {
// 	while (lst)
// 	{
// 		printf("%s -- ", (char *)lst->content);
// 		lst = lst->next;
// 	}
// 	printf("\n");
// }

// int	main(void)
// {
// 	t_list	*node1;
// 	t_list	*node2;
// 	t_list	*node3;
// 	t_list	*new_list;

// 	node1 = ft_lstnew(ft_strdup("A"));
// 	node2 = ft_lstnew(ft_strdup("B"));
// 	node3 = ft_lstnew(ft_strdup("C"));
// 	node1->next = node2;
// 	node2->next = node3;

// 	print_list(node1);
// 	new_list = ft_lstmap(node1, &add_one_new, &del_node_content);
// 	print_list(new_list);

// 	ft_lstclear(&node1, del_node_content);
// 	ft_lstclear(&new_list, del_node_content);

// 	return (0);
// }
