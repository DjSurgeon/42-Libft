/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergio-jimenez <sergio-jimenez@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 02:13:39 by sergio-jime       #+#    #+#             */
/*   Updated: 2025/03/17 02:20:05 by sergio-jime      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	@brief Copy memory area
**	@param dest Pointer to destination memory
**	@param src Pointer to source memory
**	@param n Number of bytes to copy
**	
**	Copies n bytes from memory area src to memory area dest. The memory areas
**	should not overlap (use ft_memmove for overlapping areas).
**	
**	@note Behavior is undefined if src or dest is NULL
**	@return Original destination pointer
*/

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*destination;
	const unsigned char	*source;
	size_t				i;

	if (!destination || !source)
		return (NULL);
	destination = (unsigned char *) dest;
	source = (unsigned char *) src;
	i = 0;
	if (destination == source || n == 0)
		return (dest);
	while (i < n)
	{
		destination[i] = source[i];
		i++;
	}
	return (dest);
}
