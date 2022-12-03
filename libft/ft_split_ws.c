/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_ws.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wricky-t <wricky-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 15:44:52 by wricky-t          #+#    #+#             */
/*   Updated: 2022/12/03 15:50:58 by wricky-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int count_word(char *str)
{
    int count;

    count = 0;
    while (*str != '\0')
    {
        while (ft_isspace(*str) == 1)
            str++;
        if (*str == '\0')
            break ;
        while (*str != '\0' && ft_isspace(*str) == 0)
            str++;
        count++;
    }
    return (count);
}

char    **ft_split_ws(char *str)
{
    char    **split;
    char    *start;
    int     i;

    i = 0;
    split = malloc(sizeof(char *) * (count_word(str) + 1));
    while (*str != '\0')
    {
        while (ft_isspace(*str))
            str++;
        if (*str == '\0')
            break ;
        start = str;
        while (*str != '\0' && ft_isspace(*str) == 0)
            str++;
        split[i++] = ft_strndup(start, str - start);
    }
    split[i] = NULL;
    return (split);
}