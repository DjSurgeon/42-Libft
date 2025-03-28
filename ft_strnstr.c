/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergio-jimenez <sergio-jimenez@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 10:27:10 by sergio-jime       #+#    #+#             */
/*   Updated: 2025/03/28 10:34:45 by sergio-jime      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	@brief Locate substring in limited-length string
**	@param big String to search through
**	@param little Substring to find
**	@param len Maximum search length in big
**	
**	Finds the first occurrence of null-terminated string little in string big,
**	where not more than len characters are searched. Characters after '\0' are
**	not searched. Comparison is case-sensitive.
**	
**	@note If little is empty, returns big (as specified by BSD strnstr)
**	@return Pointer to first character of found substring, NULL if not found
*/

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	little_len;
	size_t	i;

	if (!*little)
		return ((char *)big);
	little_len = ft_strlen(little);
	if (little_len > len)
		return (NULL);
	i = 0;
	while (i <= len - little_len && big[i])
	{
		if (big[i] == *little)
			if (ft_memcmp(big + i, little, little_len) == 0)
				return ((char *)big + i);
		i++;
	}
	return (NULL);
}
