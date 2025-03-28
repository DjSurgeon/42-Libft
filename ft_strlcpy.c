/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergio-jimenez <sergio-jimenez@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 10:07:53 by sergio-jime       #+#    #+#             */
/*   Updated: 2025/03/28 10:14:05 by sergio-jime      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	@brief Safely copy strings with length checking
**	@param dst Destination buffer
**	@param src Source string to copy
**	@param size Total size of destination buffer
**	
**	Copies up to (size - 1) characters from src to dst, ensuring proper
**	null-termination. The resulting string in dst is always null-terminated
**	unless size is 0.
**	
**	@note If size == 0, returns src length without writing to dst
**	@return Total length of source string (strlen(src))
*/

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	copy_len;

	src_len = ft_strlen(src);
	if (size == 0)
		return (src_len);
	copy_len = src_len;
	if (copy_len >= size)
		copy_len = size - 1;
	ft_memcpy(dst, src, copy_len);
	dst[copy_len] = '\0';
	return (src_len);
}
