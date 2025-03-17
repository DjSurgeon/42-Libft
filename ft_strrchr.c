/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergio-jimenez <sergio-jimenez@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 01:02:46 by sergio-jime       #+#    #+#             */
/*   Updated: 2025/03/17 01:30:20 by sergio-jime      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	@brief ft_strrchr - Locates the last occurrence of a character in a string
**	@param s Null-terminated string to search
**	@param c Character to locate (converted to char)
**	
**	Scans the string s to find the last occurrence of the character c
**	(converted to char). The search includes the null terminator character.
**	
**	@return Pointer to the matched character, or NULL if not found
*/

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	ch = (char)c;
	size_t		i;

	if (!s)
		return (NULL);
	i = ft_strlen(s);
	if (ch == '\0')
		return ((char *)&s[i]);
	while (i > 0)
	{
		i--;
		if (s[i] == ch)
			return ((char *)&s[i]);
	}
	return (NULL);
}
