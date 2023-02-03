/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strarrsize.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wricky-t <wricky-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 15:27:50 by wricky-t          #+#    #+#             */
/*   Updated: 2023/02/03 15:31:21 by wricky-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strarrsize(char **arr)
{
	size_t	i;

	i = 0;
	if (arr == NULL)
		return (i);
	while (arr[i] != NULL)
		i++;
	return (i);
}
