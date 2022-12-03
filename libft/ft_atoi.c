/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wricky-t <wricky-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 16:08:08 by wricky-t          #+#    #+#             */
/*   Updated: 2022/12/03 15:21:53 by wricky-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// sign: to check whether the num will be positive or negative
// firstly, eliminate the white spaces in front of the characters
// then, check the following character is '-' or '+'
// only can have one of them. if it's '-' then sign become -1
// after that, as long as the following character is digit, we convert it
// from char to int, then add it to output
int	ft_atoi(const char *str)
{
	int	sign;
	int	output;

	sign = 1;
	output = 0;
	while (ft_isspace(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (ft_isdigit(*str))
	{
		output = (output * 10) + (*str - '0');
		str++;
	}
	return (output * sign);
}
