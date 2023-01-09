/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wricky-t <wricky-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 20:25:11 by wricky-t          #+#    #+#             */
/*   Updated: 2023/01/09 14:01:10 by wricky-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// deletes and frees the given node and every successor of that node
// use del to delete
// free to free the node

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	if (!lst || !*lst)
		return ;
	while (*lst != NULL)
	{
		del((*lst)->content);
		free((*lst));
		(*lst) = (*lst)->next;
	}
}
