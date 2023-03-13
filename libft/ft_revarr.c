/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_revintarr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wricky-t <wricky-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 14:37:39 by wricky-t          #+#    #+#             */
/*   Updated: 2023/03/13 14:47:43 by wricky-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_revarr(void *arr, int arr_size, int data_size)
{
	int	i;

	i = -1;
	while (++i < arr_size / 2)
		ft_swap(&arr[i], &arr[arr_size - 1 - i], data_size);
}
