/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtok.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wricky-t <wricky-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 11:09:01 by wricky-t          #+#    #+#             */
/*   Updated: 2022/12/20 11:31:29 by wricky-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtok(char *str, const char *delim)
{
	static char	*saveptr;
  	char 		*start;
	char		*end;

  	if (str != NULL)
    	start = str;
  	else
    	start = saveptr;
  	if (start == NULL)
    	return NULL;
  	start += ft_strspn(start, delim);
  	if (*start == '\0')
    	return NULL;
  	end = start + ft_strcspn(start, delim);
  	if (*end == '\0')
    	saveptr = NULL;
	else
	{
    	*end = '\0';
    	saveptr = end + 1;
  	}
	return (start);
}
