/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumoreno <jumoreno@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 18:52:22 by jumoreno          #+#    #+#             */
/*   Updated: 2022/10/31 20:19:04 by jumoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *h, const char *n, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (n[0] == '\0')
		return ((char *)h);
	while (h[i] != '\0')
	{
		j = 0;
		while (h[i + j] == n[j] && (i + j) < len)
		{
			if (h[i + j] == '\0' && n[j] == '\0')
				return ((char *)&h[i]);
			j++;
		}
		if (n[j] == '\0')
			return ((char *)h + i);
		i++;
	}
	return (0);
}
