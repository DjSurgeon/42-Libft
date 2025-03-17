/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergio-jimenez <sergio-jimenez@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 00:22:40 by sergio-jime       #+#    #+#             */
/*   Updated: 2025/03/17 00:28:52 by sergio-jime      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	@brief ft_toupper - Converts a lowercase letter to uppercase
**	@param c Character to convert (ASCII value as integer)
**	
**	If the character is a lowercase letter ('a'-'z'), converts it to
**	its corresponding uppercase equivalent ('A'-'Z'). Non-lowercase
**	characters are returned unchanged.
**	
**	@return Uppercase equivalent if lowercase, original character otherwise
*/

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c -= 32;
		return (c);
	}
	return (c);
}
