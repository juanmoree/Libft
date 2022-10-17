/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumoreno <jumoreno@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 17:10:00 by jumoreno          #+#    #+#             */
/*   Updated: 2022/10/17 20:21:02 by jumoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// concatena strings con los mismos parametros de entrada y resultado de salida que snprintf.
// Toma el tamano completo del bufer de destino y garantiza la terminacion NUL si hay  espacio. DEBE INCLUIRSE en el "dstsize"
// Strlcpy copia hasta dstsize - 1 de src a dst si "dstsize" no es 0.
// RETURN: el total del largo de la string que ha intentado crear, es decir el largo de src.
// Si el valor de retorno es >= "dstsize", la cadena de salida se ha truncado.

size_t    ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t    i;
    size_t   h;

    i = 0;
	h = 0;
	while (src[i])
		i++;
	if (dstsize < 1)
		return (i);
	while (src[h] && h < dstsize - 1)
    {
		dst[h] = src[h];
		h++;
    }
	dst[h] = '\0';
    return (i);
}
/*
int    main()
{
    const char    src[] = "cad fuente 67890";
    char	dst[] = "cad fuente 67890";
	char    dst2[] = "cadena destino 012345";

  ft_strlcpy(dst2, src, 6);
  printf("%s\t  %s\n", dst2, src);
  strlcpy(dst, src, 6);
  printf("%s\t" "%s\n", dst, src);
 
    return (0);
}*/
