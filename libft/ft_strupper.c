/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupper.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wricky-t <wricky-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 15:44:43 by wricky-t          #+#    #+#             */
/*   Updated: 2022/12/06 15:45:37 by wricky-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strupper(char *str)
{
	char	*strupper;
	size_t	len;

	strupper = str;
	len = ft_strlen(strupper);
	while (*strupper != '\0')
	{
		*strupper = ft_toupper(*strupper);
		strupper++;
	}
	strupper -= len;
	return (strupper);
}
