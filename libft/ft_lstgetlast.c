/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstgetlast.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wricky-t <wricky-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 16:59:49 by wricky-t          #+#    #+#             */
/*   Updated: 2022/12/18 17:02:15 by wricky-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstgetlast(t_list *node)
{
	t_list	*curr;

	curr = node;
	if (curr == NULL)
		return (NULL);
	while (curr->next != NULL)
		curr = curr->next;
	return (curr);
}
