/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_free.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wricky-t <wricky-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 19:31:04 by wricky-t          #+#    #+#             */
/*   Updated: 2022/12/09 19:36:24 by wricky-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * ft_strjoin_free
 * 
 * Allocates and return a new string, which is the result of the
 * concatenation of s1 and s2
 * 
 * s1: the prefix string
 * s2: the suffix string
 * 
 * What's different from normal ft_strjoin is that, it will free s1.
 * This can be used if there's a need to use strjoin in a continuous way so
 * that don't have to worry if the previous pointer will be overwritten or not
*/

#include "libft.h"

char	*ft_strjoin_free(char const *s1, char const *s2)
{
	char	*temp;
	char	*joined;

	temp = (char *)s1;
	joined = ft_strjoin(s1, s2);
	free(temp);
	return (joined);
}