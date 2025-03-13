/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergio-jimenez <sergio-jimenez@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 02:13:20 by sergio-jime       #+#    #+#             */
/*   Updated: 2025/03/13 02:15:17 by sergio-jime      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	ft_isprint - Checks if a character is a printable ASCII character.
**	@c: Character to check, represented as an integer (ASCII value).
**	
**	Verifies if the character falls within the printable ASCII range
**	(32 ' ' to 126 '~' inclusive).
**	
**	Return: 1 if the character is printable, 0 otherwise.
*/

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
