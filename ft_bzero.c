/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergio-jimenez <sergio-jimenez@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 01:59:37 by sergio-jime       #+#    #+#             */
/*   Updated: 2025/03/17 02:03:52 by sergio-jime      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	@brief Fill memory with zero-valued bytes
**	@param s Pointer to the memory area to initialize
**	@param n Number of bytes to fill
**	
**	This function sets the first n bytes of the memory area pointed to by s
**	to zero (ASCII NUL characters '\0'). Commonly used to initialize memory
**	blocks before use.
**	
**	@note Uses unsigned char operations to guarantee byte-level access
*/

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
