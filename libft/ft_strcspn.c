/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wricky-t <wricky-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 12:42:19 by wricky-t          #+#    #+#             */
/*   Updated: 2022/12/05 13:08:15 by wricky-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * strcspn - Get span until character in string
 * 
 * str1:    String to be scanned
 * str2:    String containing the characters to match
 * 
 * This function has no NULL check so please make sure that you do a
 * NULL check before passing in your string in this function.
 */
size_t	ft_strcspn(const char *str1, const char *str2)
{
	char	*occurrence;

	while (*str2 != '\0')
	{
		occurrence = ft_strchr(str1, *str2);
		if (occurrence != NULL)
			break ;
		str2++;
	}
	if (occurrence == NULL)
		return (ft_strlen(str1));
	return (occurrence - str1);
}
