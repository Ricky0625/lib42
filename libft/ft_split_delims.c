/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_skip.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wricky-t <wricky-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 17:42:25 by wricky-t          #+#    #+#             */
/*   Updated: 2022/12/05 23:11:54 by wricky-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	has_a_pair(char **str)
{
	char	*copy;
	char	delimeter;

	copy = *str;
	delimeter = *copy;
	copy++;
	while (*copy != '\0')
	{
		if (*copy == delimeter)
		{
			*str = copy + 1;
			break ;
		}
		copy++;
	}
}

static int	count_word(char *str, char *delimeters)
{
	int	count;
	int	in_delimeter;

	count = 0;
	in_delimeter = 0;
	while (*str != '\0')
	{
		while (ft_isspace(*str) == 1)
			str++;
		if (*str == '\0')
			break ;
		while (*str != '\0' && ft_isspace(*str) == 0)
		{
			if (ft_strchr(delimeters, *str) != NULL)
				has_a_pair(&str);
			if (ft_isspace(*str) == 1)
				break ;
			str++;
		}
		count++;
	}
	return (count);
}

char	**ft_split_delims(char *str, char *delimeters)
{
	char	**split;
	char	*start;
	int		i;

	i = 0;
	split = malloc(sizeof(char *) * (count_word(str, delimeters) + 1));
	while (*str != '\0')
	{
		while (ft_isspace(*str))
			str++;
		if (*str == '\0')
			break ;
		start = str;
		while (*str != '\0' && ft_isspace(*str) == 0)
		{
			if (ft_strchr(delimeters, *str) != NULL)
				has_a_pair(&str);
			if (ft_isspace(*str) == 1)
				break ;
			str++;
		}
		split[i++] = ft_strndup(start, str - start);
	}
	split[i] = NULL;
	return (split);
}
