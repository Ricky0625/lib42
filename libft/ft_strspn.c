/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wricky-t <wricky-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 11:32:10 by wricky-t          #+#    #+#             */
/*   Updated: 2022/12/20 11:33:19 by wricky-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strspn(const char *str, const char *accept)
{
	size_t	count;

	count = 0;
	while (*str != '\0' && ft_strchr(accept, *str) != NULL)
	{
		count++;
		str++;
	}
	return (count);
}
