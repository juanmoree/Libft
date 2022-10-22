/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumoreno <jumoreno@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 17:10:00 by jumoreno          #+#    #+#             */
/*   Updated: 2022/10/22 19:31:31 by jumoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	h;

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
