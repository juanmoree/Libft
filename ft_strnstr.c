/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumoreno <jumoreno@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 18:52:22 by jumoreno          #+#    #+#             */
/*   Updated: 2022/10/27 21:34:51 by jumoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
char    *ft_strnstr(const char *h, const char *n, size_t len)
{
    size_t    i;
    size_t    j;

    i = 0;
    j = 0;
    if (((const char *)n)[i] == '\0')
      return ((char *)h);
    while (((const char *)n)[i] != '\0' && j < (len - 1))
    {
          if (n[i] == h[j])
          {
            i++;
            j++;
          }
          if (((const char *)n)[i] == '\0')
          return ((char *)&h[j - 1]);
          else
          j++;
    }
    return (NULL);
}
/*
int    main()
{
    char    s1[] = "see FF your FF return FF now FF";
    char    s2[] = "FF";
    size_t    len = 20;
    printf("%s\n", ft_strnstr(s1, s2, len));
	printf("%s\n", strnstr(s1, s2, len));
}*/
