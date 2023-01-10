/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstcopy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wricky-t <wricky-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 16:47:48 by wricky-t          #+#    #+#             */
/*   Updated: 2023/01/10 17:03:11 by wricky-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Copy a lst. Takes in a function pointer so that user can use to
 * 		  copy self-defined struct.
 * @details
 * 1. Check if the lst is null, if yes return null
 * 2. Copy the head first and point lst to next node
 * 3. Iterate through the rest of the lst and add new node
 * 4. Return the head
*/
t_list	*ft_lstcopy(t_list *lst, void *(*copy)(void *))
{
	t_list	*head;

	if (lst == NULL)
		return (NULL);
	head = ft_lstnew(copy(lst->content));
	lst = lst->next;
	while (lst != NULL)
	{
		ft_lstadd_back(&head, ft_lstnew(copy(lst->content)));
		lst = lst->next;
	}
	return (head);
}
