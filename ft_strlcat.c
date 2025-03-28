/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergio-jimenez <sergio-jimenez@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 13:10:47 by sergio-jime       #+#    #+#             */
/*   Updated: 2025/03/28 10:16:23 by sergio-jime      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	@brief Safely concatenate strings with length checking
**	@param dst Null-terminated destination buffer
**	@param src Null-terminated source string
**	@param size Total size of destination buffer
**	
**	Appends the null-terminated string src to the end of dst. It will append
**	at most (size - strlen(dst) - 1) characters, ensuring proper null
	termination.
**	The resulting string in dst is always null-terminated unless size is 0.
**	
**	@note If size <= strlen(dst), returns size + strlen(src)
	(total length needed)
**	@return Total length of concatenated string (initial dst len + src len)
*/

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	to_copy;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (size <= dst_len)
		return (size + src_len);
	to_copy = size - dst_len - 1;
	if (src_len < to_copy)
		to_copy = src_len;
	ft_memcpy(dst + dst_len, src, to_copy);
	dst[dst_len + to_copy] = '\0';
	return (dst_len + src_len);
}
