/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumoreno <jumoreno@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 20:30:30 by jumoreno          #+#    #+#             */
/*   Updated: 2022/10/22 22:36:51 by jumoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
	}
	return (0);
}
/*
int	main()
{
	char c[] = "";
	char d[] = "";
	char e[] = "esta es la cadena 1";
	char f[] = "esta es lz cadena 1";
	size_t n = 20;
	printf("%d\n", ft_memcmp(c, d, n));
	printf("%d\n", memcmp(e, f, n));
	return (0);
}*/
