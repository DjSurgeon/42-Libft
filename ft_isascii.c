/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergio-jimenez <sergio-jimenez@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 02:18:08 by sergio-jime       #+#    #+#             */
/*   Updated: 2025/03/13 02:18:35 by sergio-jime      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	ft_isascii - Checks if a character is an ASCII character.
**	@c: Character to check, represented as an integer (ASCII value).
**	
**	Verifies if the character falls within the standard ASCII range
**	(0 to 127 inclusive, or 0x00 to 0x7F in hexadecimal).
**	
**	Return: 1 if the character is within ASCII range, 0 otherwise.
*/

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
