/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumoreno <jumoreno@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 18:52:22 by jumoreno          #+#    #+#             */
/*   Updated: 2022/10/26 22:52:33 by jumoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
char    *ft_strnstr(const char *h, const char *n, size_t len)
{
    size_t	i;
    size_t	j;

    i = 0;
    j = 0;
	if (((const char *)n)[i] == '\0')
		return ((char *)h);
	while (n[i] && h[j] && j <= len)
    {
        if (n[i] != h[j])
            j++;
        while (n[i] == h[j])
        {
          if (n[i + 1] == h [j + 1])
          return ((char *)&h[j]);
          else
          j++;
        }
    }
    return ((char *)h);
}
/*
int    main()
{
    char    s1[] = "Cadena a apuntar";
    char    s2[] = "x";
    size_t    len = 11;
    printf("%s\n", ft_strnstr(s1, s2, len));
	printf("%s\n", strnstr(s1, s2, len));
}*/
