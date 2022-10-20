/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumoreno <jumoreno@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 20:23:34 by jumoreno          #+#    #+#             */
/*   Updated: 2022/10/20 13:42:03 by jumoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize)
{
	size_t	i;
	size_t	h;

	i = 0;
	h = 0;
	while (dst[i])
		i++;
	if (dstsize < 1)
		return (i);
	while (src[h] && h < dstsize - 1)
		dst[h] = src[h];
	h++;
	dst[h] = *dst;
	return (i);
}

int	main()
{
	char src[] = "fuente";
	char dst[] = "98765";
	char dst2[] = "23456";

	strlcat(dst, src, 5);
	printf("%s%s\n", src, dst);
	ft_strlcat(dst2, src, 5);
	printf("%s%s\n", src, dst2);
	return (0);
}
