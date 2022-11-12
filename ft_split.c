/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumoreno <jumoreno@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 21:10:13 by jumoreno          #+#    #+#             */
/*   Updated: 2022/11/12 11:57:43 by jumoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *s, char c)
{
	int	ent;
	int	words;

	words = 0;
	ent = 0;
	while (*s != '\0')
	{
		if (*s != c && ent == 0)
		{
			words++;
			ent = 1;
		}
		else if (*s == c)
			ent = 0;
		s++;
	}
	return (words);
}

static int	ft_count_len(char const *s, char c)
{
	int	i;
	int	size;

	i = 0;
	size = 0;
	while (s[i] != c && s[i] != '\0')
		i++;
	size = i;
	return (size);
}

char	**ft_error(char **res, int nbr_word)
{
	while (nbr_word--)
		free(res[nbr_word]);
	free(res);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		nbr_word;
	int		len_word;
	int		words;
	char	**res;

	nbr_word = 0;
	len_word = 0;
	words = count_words(s, c);
	res = malloc((words + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	while (nbr_word < words)
	{
		while (s[len_word] == c)
			s++;
		len_word = 0;
		res[nbr_word] = ft_substr(s, 0, ft_count_len(s, c));
		if (res[nbr_word++] == NULL)
			return (ft_error(res, nbr_word));
		s += ft_count_len(s, c);
	}
	res[nbr_word] = NULL;
	return (res);
}
/*
int	main()
{
	int	i;
	char	s[] = "   lorem   ipsum dolor     ";
	char c = ' ';
	i = 0;
	char **res = ft_split(s, c); 
	while (res[i] != NULL)
	{
		printf("%s\n", res[i]);
		i++;
	}
	return (0);
}*/
