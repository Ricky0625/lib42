/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlower.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wricky-t <wricky-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 15:22:25 by wricky-t          #+#    #+#             */
/*   Updated: 2022/12/12 12:39:03 by wricky-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strlower(char *str)
{
	char	*strlower;
	size_t	len;

	strlower = ft_strdup(str);
	len = ft_strlen(strlower);
	while (*strlower != '\0')
	{
		*strlower = ft_tolower(*strlower);
		strlower++;
	}
	strlower -= len;
	return (strlower);
}
