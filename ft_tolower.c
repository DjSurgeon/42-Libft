/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergio-jimenez <sergio-jimenez@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 00:23:20 by sergio-jime       #+#    #+#             */
/*   Updated: 2025/03/17 00:23:31 by sergio-jime      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	@brief ft_tolower - Converts an uppercase letter to lowercase
**	@param c Character to convert (ASCII value as integer)
**	
**	If the character is an uppercase letter ('A'-'Z'), converts it to
**	its corresponding lowercase equivalent ('a'-'z'). Non-uppercase
**	characters are returned unchanged.
**	
**	@return Lowercase equivalent if uppercase, original character otherwise
*/

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c += 32;
		return (c);
	}
	return (c);
}
