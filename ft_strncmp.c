/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergio-jimenez <sergio-jimenez@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 01:53:55 by sergio-jime       #+#    #+#             */
/*   Updated: 2025/03/27 12:54:49 by sergio-jime      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	@brief Compares two strings up to a specified number of characters
**	@param s1 First null-terminated string to compare
**	@param s2 Second null-terminated string to compare
**	@param n Maximum number of characters to compare
**	
**	Lexicographically compares at most n characters from s1 and s2.
**	Comparison is done using unsigned char values. The check includes
**	the null terminator character if encountered within n characters.
**	
**	@return <0, 0, or >0 if s1 is less than, matches, or greater than s2
*/

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	const unsigned char	*byte1 = (const unsigned char *)s1;
	const unsigned char	*byte2 = (const unsigned char *)s2;
	size_t				i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n && (byte1[i] != '\0' || byte2[i] != '\0'))
	{
		if (byte1[i] != byte2[i])
			return (byte1[i] - byte2[i]);
		i++;
	}
	return (0);
}
