/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumoreno <jumoreno@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 20:08:19 by jumoreno          #+#    #+#             */
/*   Updated: 2022/10/07 18:24:23 by jumoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include<string.h>
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int i;
	
	if (n == 0)
		return (0);
	i = 0;
	while ((s1[i] == s2[i]) && s1[i] != '\0')
	{
		if (i < (n - 1))
			i++;
		else
			return (0);
	}
	return ((unsigned char)(s1[i]) - (unsigned char)(s2[i]));
}

int	main(void)
{
	char s1[] = "estoooo to es un";
	char s2[] = "esto es cadena";
	size_t n = 7;

	printf("%d\n", ft_strncmp(s1, s2, n));
	printf("%d\n", strncmp(s1, s2, n)); // arroja el resultado de el caracter de s1 menos el caracter de s2 cuando encuentra una diferencia (ASCII)
	return (0);
}
