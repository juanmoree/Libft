/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumoreno <jumoreno@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 22:00:56 by jumoreno          #+#    #+#             */
/*   Updated: 2022/10/31 22:12:22 by jumoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*aux;

	aux = malloc(ft_strlen(s1) + 1);
	if (!aux)
		return (0);
	ft_memcpy(aux, s1, ft_strlen(s1) + 1);
	return (aux);
}
