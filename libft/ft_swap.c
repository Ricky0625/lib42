/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wricky-t <wricky-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 14:14:33 by wricky-t          #+#    #+#             */
/*   Updated: 2023/03/13 14:28:23 by wricky-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_swap(void *a, void *b, const int size)
{
	void	*temp;

	temp = malloc(size);
	ft_memcpy(temp, b, size);
	ft_memcpy(b, a, size);
	ft_memcpy(a, temp, size);
	free(temp);
}
