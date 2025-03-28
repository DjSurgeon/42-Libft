/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergio-jimenez <sergio-jimenez@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 14:20:29 by sergio-jime       #+#    #+#             */
/*   Updated: 2025/03/28 09:56:04 by sergio-jime      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int main(void)
{
	char dest[30] = "Hola ";
	char src[] = "mundo!";
	size_t size = 22;
	size_t result;

	printf("%s <- destino\n", dest);
	printf("%s <- source\n", src);
	printf("%ld -size\n", size);
	result =  ft_strlcat(dest, src, size);
	printf("%s <- destino\n", dest);
	printf("%ld", result);
	
	return (0);
}