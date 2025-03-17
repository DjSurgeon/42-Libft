/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergio-jimenez <sergio-jimenez@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 02:32:20 by sergio-jime       #+#    #+#             */
/*   Updated: 2025/03/17 02:35:23 by sergio-jime      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	@brief Locate byte in memory block
**	@param s Memory area to search
**	@param c Byte to locate (converted to unsigned char)
**	@param n Number of bytes to check
**	
**	Searches within the first n bytes of the memory area s for the first
**	occurrence of byte c (interpreted as unsigned char). The search includes
**	all bytes up to but not including the nth byte.
**	
**	@return Pointer to matching byte, NULL if not found
*/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*byte;
	unsigned char		character;
	size_t				i;

	byte = (const unsigned char *) s;
	character = (unsigned char) c;
	i = 0;
	while (i < n)
	{
		if (byte[i] == character)
			return ((void *)&byte[i]);
		i++;
	}
	return (NULL);
}
