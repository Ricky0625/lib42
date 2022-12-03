/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wricky-t <wricky-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 15:41:58 by wricky-t          #+#    #+#             */
/*   Updated: 2022/12/03 15:44:35 by wricky-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(char *str, int n)
{
	char	*out;
	int		i;

	out = malloc(sizeof(char) * (n + 1));
	i = -1;
	while (++i < n)
		out[i] = str[i];
	out[i] = '\0';
	return (out);
}
