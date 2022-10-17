/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumoreno <jumoreno@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 19:32:10 by jumoreno          #+#    #+#             */
/*   Updated: 2022/10/12 19:54:09 by jumoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t	i;

	i = 0;
	if (!src && !dst)
		return (0);
	if (((size_t)dst) - ((size_t)src) < (n + 1))
	{
		while (i < (n))
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	else
	{
		while (i < (n))
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dst);
}
/*
int	main()
{
	char cad1[] = "texto a copiar";
	char cad2[] = "       ";
	char cad3[] = "       ";
	size_t x = 4;
	printf("%s\n", ft_memcpy(cad2, cad1, x));
	printf("%s\n", memcpy(cad3, cad1, x));

 // Create a place to store our results 
    int result;

 // Create two arrays to hold our data
    char sorc[50];
    char dest[25];

 // Copy a string into the original array
    strcpy(sorc, "Cadena original a copiar by jumoreno");

 //  Copy the first 24 characters of the original
 //  array into the newcopy array 
    result = (size_t)memcpy(dest, sorc, 24);

//     Set the character at position 24 to a null (char 0)
//     in the newcopy array to ensure the string is terminated
//     (This is important since memcpy does not initialize memory
//     and printf expects a null at the end of a string)
    dest[24] = 0;

 // Display the contents of the new copy
    printf("%s\n", dest);

    return 0;
}*/
