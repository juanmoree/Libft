/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumoreno <jumoreno@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 18:54:37 by jumoreno          #+#    #+#             */
/*   Updated: 2022/11/11 14:36:38 by jumoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_absolut(int n)
	// convierte el ultimo(primer) numero en + si es -
{
	if (n < 0)
		n = -n;
	return (n);
}

static int	ft_nbrlen(int n)
	// Nos dice de que tamano es el numero(cuantos digitos)
{
	int	size;

	size = 0;
	if (n == 0)
		return (1);
	else if (n < 0)
		size++;
	while (n)
	{
		(n /= 10);
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		size;

	size = ft_nbrlen(n);
	str = (char *)malloc(sizeof(char) * size + 1);
	if (!str)
		return (NULL);
	str[size] = '\0';
	if (n < 0)
		str[0] = '-';
	if (n == 0)
		str[0] = '0';
	while (n)
	{
		--size;
		str[size] = ft_absolut(n % 10) + '0';
		n /= 10;
	}
	return (str);
}
