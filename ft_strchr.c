/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumoreno <jumoreno@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 19:14:17 by jumoreno          #+#    #+#             */
/*   Updated: 2022/10/17 16:50:46 by jumoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<string.h>
#include<stdio.h>

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (*s != '\0' && c != *s)
		s++;
	if (c == *s)
		return ((char*)s);
	return (NULL);
}

int	main(void)
{
	char	s[] = "Hello \0world1\023\0";
	char	s2[] = "Hello \0world1\023\0";
	int c = 'w';

	printf("%s\n", ft_strchr(s, c));
	printf("%s\n", strchr(s2, c));
	return (0);
}
