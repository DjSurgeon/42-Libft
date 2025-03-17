/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergio-jimenez <sergio-jimenez@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 02:06:54 by sergio-jime       #+#    #+#             */
/*   Updated: 2025/03/17 02:20:20 by sergio-jime      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	@brief Fill memory with a constant byte
**	@param s Pointer to the memory area to fill
**	@param c Value to set (converted to unsigned char)
**	@param n Number of bytes to fill
**	
**	This function fills the first n bytes of the memory area pointed to by s
**	with the constant byte c. The operation is performed at the byte level
**	using unsigned char conversion to ensure consistent behavior across
**	different platforms.
**	
**	@return Original pointer to the memory area s
*/

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
