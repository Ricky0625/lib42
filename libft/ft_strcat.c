/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wricky-t <wricky-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 20:54:25 by wricky-t          #+#    #+#             */
/*   Updated: 2022/12/07 20:57:04 by wricky-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, char *src)
{
	char	*out;
	int		append_at;

	out = dest;
	append_at = ft_strlen(dest);
	while (*src != '\0')
	{
		out[append_at] = *src;
		src++;
		append_at++;
	}
	out[append_at] = '\0';
	return (out);
}
