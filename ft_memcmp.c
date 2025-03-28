/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergio-jimenez <sergio-jimenez@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 02:26:52 by sergio-jime       #+#    #+#             */
/*   Updated: 2025/03/27 13:05:06 by sergio-jime      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	@brief Compare two memory areas
**	@param s1 Pointer to first memory block
**	@param s2 Pointer to second memory block
**	@param n Number of bytes to compare
**	
**	Compares the first n bytes (each interpreted as unsigned char) of the
**	memory areas s1 and s2. The comparison is performed using unsigned
**	character values for consistent results across different platforms.
**	
**	@return <0, 0, or >0 if s1 is less than, equal to, or greater than s2
**	@note Returns actual byte difference (not limited to -1/0/1)
*/

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*memory1;
	const unsigned char	*memory2;
	size_t				i;

	memory1 = (const unsigned char *)s1;
	memory2 = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (memory1[i] != memory2[i])
			return (memory1[i] - memory2[i]);
		i++;
	}
	return (0);
}
