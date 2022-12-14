/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wricky-t <wricky-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 19:51:20 by wricky-t          #+#    #+#             */
/*   Updated: 2023/01/09 17:47:39 by wricky-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// lst: the address of a pointer to a node
// f: the address of the function used to iterate on the list

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}
