/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumoreno <jumoreno@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 19:35:07 by jumoreno          #+#    #+#             */
/*   Updated: 2022/10/10 19:35:25 by jumoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}
/*
int	main()
{
	char	src[] = "1234nte";
	char	dst[] = "Destino"; // check if overlap putting less chars than src
	char	dst2[] = "Destino";
	printf("%s\n", memmove(dst, src, 4));
	printf("%s\n", ft_memmove(dst2, src, 4));
	return (0);
}*/
