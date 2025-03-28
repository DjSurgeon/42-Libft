/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergio-jimenez <sergio-jimenez@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 10:36:34 by sergio-jime       #+#    #+#             */
/*   Updated: 2025/03/28 11:04:49 by sergio-jime      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	@brief Convert ASCII string to integer
**	@param str Null-terminated string to convert
**	
**	Parses the initial portion of the string as an integer, ignoring leading
**	whitespace characters (as defined by ft_isspace). Then accepts an optional
**	sign character (+ or -) followed by numerical digits. Conversion stops at
**	the first non-digit character. Follows standard atoi behavior for overflow.
**	
**	@return Integer value of the converted number
*/

#include "libft.h"

int	ft_atoi(const char *str)
{
	size_t	i;
	int		sign;
	int		result;

	i = 0;
	result = 0;
	sign = 1;
	while (ft_isspace(str[i]) == 1)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}
