/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumoreno <jumoreno@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 19:35:07 by jumoreno          #+#    #+#             */
/*   Updated: 2022/10/15 19:14:11 by jumoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if (!src && !dst)
		return (0);
	if (((size_t)dst) - ((size_t)src) < len)
	{
		i = len -1;
		while (i < len)
		{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i--;
		}
	}
	else
	{
		while (i < len)
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
	char	src[] = "lorem ipum dolor sit a";
	char	dst[] = "lorem ipum dolor sit a"; // check if overlap putting less chars than src
	char	dst2[] = "lorem ipum dolor sit a";
	printf("%s\n", memmove(dst, src, 8));
	printf("%s\n", ft_memmove(dst2, src, 8));
	return (0);
}*/
