/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wricky-t <wricky-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 15:17:32 by wricky-t          #+#    #+#             */
/*   Updated: 2022/12/03 15:21:55 by wricky-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// ft_isspace: check whether a character is a white-space character
// white-space: ' ', '\t', '\n', '\v', '\f', '\r'
// ascii code: 32, 9-13
int	ft_isspace(char ch)
{
	return (ch == 32 || (ch >= 9 && ch <= 13));
}
