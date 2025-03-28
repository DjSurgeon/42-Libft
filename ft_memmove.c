/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergio-jimenez <sergio-jimenez@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 02:22:04 by sergio-jime       #+#    #+#             */
/*   Updated: 2025/03/28 10:24:20 by sergio-jime      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	@brief Safely copy memory areas that may overlap
**	@param dest Pointer to destination memory
**	@param src Pointer to source memory
**	@param n Number of bytes to copy
**	
**	Copies n bytes from src to dest. Handles overlapping memory regions
**	correctly by choosing copy direction:
**	- Forward copy (memcpy) when dest < src
**	- Backward copy when dest > src to prevent data corruption
**	
**	@note Uses unsigned char operations for byte-level access
**	@return Original destination pointer
*/

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*destination;
	unsigned char	*source;
	size_t			i;

	if (!src && !dest)
		return (NULL);
	destination = (unsigned char *)dest;
	source = (unsigned char *)src;
	i = 0;
	if (destination == source || n == 0)
		return ((void *)destination);
	if (destination < source)
		ft_memcpy(dest, src, n);
	if (destination > source)
	{
		i = n;
		while (i > 0)
		{
			destination [i - 1] = source[i - 1];
			i--;
		}
	}
	return ((void *)destination);
}
