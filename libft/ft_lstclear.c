/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wricky-t <wricky-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 20:25:11 by wricky-t          #+#    #+#             */
/*   Updated: 2023/01/11 13:39:42 by wricky-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// deletes and frees the given node and every successor of that node
// use del to delete
// free to free the node

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (!lst || !*lst)
		return ;
	while (*lst != NULL)
	{
		temp = (*lst);
		(*lst) = (*lst)->next;
		del(temp->content);
		free(temp);
	}
}
