/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumoreno <jumoreno@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 19:21:58 by jumoreno          #+#    #+#             */
/*   Updated: 2022/10/15 19:36:52 by jumoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<stdio.h>
#include<string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*tmp;

	tmp = (unsigned char *)b;
	while (len--)
		*tmp++ = c;
	return (b);
}
/*
int	main()
{
	char b[] = "Esta es la string";
	int c = 'h';
	size_t len = 5;

	printf("%s\n", ft_memset(b, c, len));
	printf("%s\n", memset(b, c, len));
	return (0);
}*/
