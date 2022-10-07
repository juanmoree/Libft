/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumoreno <jumoreno@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 17:22:53 by jumoreno          #+#    #+#             */
/*   Updated: 2022/10/05 19:49:25 by jumoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>

int			ft_isalpha(int word);
int			ft_isdigit(int digit);
int			ft_isalnum(int a);
int			ft_isascii(int c);
int			ft_isprint(int c);
size_t		ft_strlen(const char *s);
int			ft_toupper(int a);
int			ft_tolower(int a);
char		*ft_strchr(const char *s, int c);
char		*ft_strrchr(const char *s, int c);

#endif	
