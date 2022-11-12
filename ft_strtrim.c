/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumoreno <jumoreno@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 19:16:34 by jumoreno          #+#    #+#             */
/*   Updated: 2022/11/12 19:08:43 by jumoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	rev;

	while (*s1 && ft_strchr(set, *s1))
		s1++;
	rev = ft_strlen(s1);
	while (ft_strrchr(set, s1[rev]) && rev)
		rev--;
	return (ft_substr(s1, 0, rev + 1));
}
/*
int	main()
{
	char s1[] = "hoooolaaaaahaaaooollaaaahqqjajahhhhakakqhooolaaaaahoo";
	char set[] = "hola";
	printf("%s\n", ft_strtrim(s1, set));
	return (0);
}*/
