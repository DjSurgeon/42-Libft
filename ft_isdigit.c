/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergio-jimenez <sergio-jimenez@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 02:04:39 by sergio-jime       #+#    #+#             */
/*   Updated: 2025/03/16 23:49:04 by sergio-jime      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	@brief ft_isdigit - Checks if a character is a decimal digit.
**	@param c Character to check, represented as an integer (ASCII value).
**	
**	Verifies if the character falls within the ASCII range of 
**	digits ('0' to '9' inclusive).
**	
**	@return 1 if the character is a digit, 0 otherwise.
*/

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
