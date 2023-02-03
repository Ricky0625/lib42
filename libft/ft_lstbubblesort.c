/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstbubblesort.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wricky-t <wricky-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 10:32:09 by wricky-t          #+#    #+#             */
/*   Updated: 2023/02/03 11:09:11 by wricky-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstbubblesort(t_list **lst, int (*cmp)(void *, void *))
{
	t_list	*a;
	t_list	*b;

	a = *lst;
	while (a != NULL)
	{
		b = *lst;
		while (b->next != NULL)
		{
			if (cmp(a->content, b->content) < 0)
				ft_lstswapcontent(a, b);
			b = b->next;
		}
		a = a->next;
	}
}
