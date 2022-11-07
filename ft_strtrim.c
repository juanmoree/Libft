/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumoreno <jumoreno@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 21:48:14 by jumoreno          #+#    #+#             */

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
	char s1[] = "murcielago murcielago murcielago";
	char set[] = "aeiou";
	printf("%s\n", ft_strtrim(s1, set));
	return (0);
}*/
