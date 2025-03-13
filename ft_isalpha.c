/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergio-jimenez <sergio-jimenez@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 01:56:58 by sergio-jime       #+#    #+#             */
/*   Updated: 2025/03/13 02:13:46 by sergio-jime      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	ft_isalpha - Checks if a character is an alphabetic letter.
**	@c: The character to check, provided as an integer (ASCII value).
**	
**	This function determines whether the passed character is an uppercase
**	('A'-'Z') or lowercase ('a'-'z') letter according to the ASCII character set.
**	
**	Return: 1 if the character is alphabetic, 0 otherwise.
*/

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
