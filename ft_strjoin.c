/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumoreno <jumoreno@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 22:22:26 by jumoreno          #+#    #+#             */
/*   Updated: 2022/11/03 21:47:05 by jumoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*aux;

	j = 0;
	i = 0;
	aux = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!aux)
		return (0);
	if (!s1)
		ft_strdup("\0");
	else
	{
		while (s1[i] != '\0')
			aux[j++] = s1[i++];
	}
	i = 0;
	while (s2[i] != '\0')
		aux[j++] = s2[i++];
	aux[j] = ('\0');
	return (aux);
}
/*
int	main()
{
	char s1[] = "Esta es";
	char s2[] = "La cadena";
	printf("%s\n", ft_strjoin(s1, s2));
	return (0);
}
*/
