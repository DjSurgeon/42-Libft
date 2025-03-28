/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergio-jimenez <sergio-jimenez@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 10:37:04 by sergio-jime       #+#    #+#             */
/*   Updated: 2025/03/28 10:40:40 by sergio-jime      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	@brief Checks if a character is a whitespace character
**	@param c Character to check (ASCII value as integer)
**	
**	Verifies if the character is one of the standard whitespace characters:
**	- Space (' ', ASCII 32)
**	- Form feed ('\f', ASCII 12)
**	- Newline ('\n', ASCII 10)
**	- Carriage return ('\r', ASCII 13)
**	- Horizontal tab ('\t', ASCII 9)
**	- Vertical tab ('\v', ASCII 11)
**	
**	@return 1 if whitespace character, 0 otherwise
*/

#include "libft.h"

int	ft_isspace(int c)
{
	if (c == 32 || c == '\f' || c == '\n'
		|| c == '\r' || c == '\t' || c == '\v')
		return (1);
	return (0);
}
