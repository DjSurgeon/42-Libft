/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergio-jimenez <sergio-jimenez@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 00:36:41 by sergio-jime       #+#    #+#             */
/*   Updated: 2025/03/17 01:04:47 by sergio-jime      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	@brief ft_strchr - Locates the first occurrence of a character in a string
**	@param s Null-terminated string to search
**	@param c Character to locate (converted to char)
**	
**	Scans the string s to find the first occurrence of the character c
**	(converted to char). The search includes the null terminator character.
**	
**	@return Pointer to the matched character, or NULL if not found
*/

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	const char	ch = (char)c;
	size_t		i;

	i = 0;
	if (!s)
		return (NULL);
	while (s[i])
	{
		if (s[i] == ch)
			return ((char *)&s[i]);
		i++;
	}
	if (ch == '\0')
		return ((char *)&s[i]);
	return (NULL);
}
