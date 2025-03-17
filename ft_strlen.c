/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergio-jimenez <sergio-jimenez@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 00:24:58 by sergio-jime       #+#    #+#             */
/*   Updated: 2025/03/17 00:31:13 by sergio-jime      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	@brief ft_strlen - Calculates the length of a null-terminated string
**	@param s Null-terminated string to measure
**	
**	Iterates through the characters of the string until encountering
**	the null terminator ('\0'), counting the number of characters.
**	
**	@return Number of characters in the string (excluding null terminator)
*/

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
