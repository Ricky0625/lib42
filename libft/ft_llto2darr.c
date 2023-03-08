/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_llto2darr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wricky-t <wricky-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 15:10:09 by wricky-t          #+#    #+#             */
/*   Updated: 2023/03/08 15:10:52 by wricky-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	**ft_llto2darr(t_list *list, void *(*f)(void *))
{
	int		len;
	int		i;
	void	**arr;

	len = ft_lstsize(list);
	i = -1;
	arr = malloc((len + 1) * sizeof(void *));
	while (++i < len)
	{
		arr[i] = f(list->content);
		list = list->next;
	}
	arr[i] = NULL;
	return (arr);
}
