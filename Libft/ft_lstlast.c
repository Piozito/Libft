/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaleixo- <aaleixo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 11:29:15 by aaleixo-          #+#    #+#             */
/*   Updated: 2024/04/22 15:09:53 by aaleixo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst->next != NULL)
		lst = lst->next;
	return (lst->content);
}
/*
#include <stdio.h>

int	main(void)
{
	t_list *node1 = (t_list *)malloc(sizeof(t_list));
	node1->content = strdup("Node 1");
	node1->next = NULL;

	t_list *node2 = (t_list *)malloc(sizeof(t_list));
	node2->content = strdup("Node 2");
	node2->next = NULL;

	node1->next = node2;

	printf("Lista:\n");
	printf("%s", ft_lstlast(node1));

	free(node1->content);
	free(node1);
	free(node2->content);
	free(node2);

	return (0);
}*/