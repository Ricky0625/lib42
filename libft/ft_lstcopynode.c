/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstcopynode.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wricky-t <wricky-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 17:35:34 by wricky-t          #+#    #+#             */
/*   Updated: 2023/01/10 17:54:05 by wricky-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_lstcopynode(void *content)
{
	void	*new;

	new = malloc(sizeof(void *));
	ft_memcpy(new, content, sizeof(void *));
	return (new);
}
