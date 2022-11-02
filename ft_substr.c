/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumoreno <jumoreno@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 17:17:06 by jumoreno          #+#    #+#             */
/*   Updated: 2022/11/02 22:20:04 by jumoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	len_s;
	size_t	i;
	char	*str;

	i = 0;
	if (!s)
		return (0);
	len_s = ft_strlen(s);
	if (start >= len_s)
		return (ft_strdup(""));
	if (start + len == len_s + 1 || len > len_s)
		len = len_s - start;
	str = (char *)malloc(len +1);
	if (!str)
		return (NULL);
	while (i++ < start)
		s++;
	ft_strlcpy(str, s, len + 1);
	return (str);
}
/*
int main()
{
	char s[] = "substr function Implementation";

	unsigned int start = 7;
	size_t len = 12;

	char* dest = ft_substr(s, start, len);

	printf("%s\n", dest);

	return 0;
}*/
