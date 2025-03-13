/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergio-jimenez <sergio-jimenez@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 02:06:43 by sergio-jime       #+#    #+#             */
/*   Updated: 2025/03/13 02:14:31 by sergio-jime      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	ft_isalnum - Checks if a character is alphanumeric.
**	@c: Character to check, represented as an integer (ASCII value).
**	
**	Verifies if the character is either a decimal digit ('0'-'9'),
**	an uppercase letter ('A'-'Z'), or a lowercase letter ('a'-'z').
**	
**	Return: 1 if the character is alphanumeric, 0 otherwise.
*/

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9')
		|| (c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
