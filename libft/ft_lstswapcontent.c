/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstswap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wricky-t <wricky-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 10:44:30 by wricky-t          #+#    #+#             */
/*   Updated: 2023/02/03 11:06:58 by wricky-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Swap node's content
*/
void	ft_lstswapcontent(t_list *ptr1, t_list *ptr2)
{
	t_list	*tmp;

	if (ptr1 == ptr2)
		return ;
	tmp = ptr1->content;
	ptr1->content = ptr2->content;
	ptr2->content = tmp;
}
