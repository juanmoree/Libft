/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumoreno <jumoreno@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 17:22:53 by jumoreno          #+#    #+#             */
/*   Updated: 2022/10/08 19:40:34 by jumoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <string.h>

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
int			ft_strncmp(const char *s1, const char *s2, size_t n);
void 		*ft_memset(void *b, int c, size_t len);
void   		ft_bzero(void *s, size_t n);
//void 		*ft_memcpy(void *restric dst, const void *restrict src, size_t n);
void		*ft_memmove(void *dst, const void *src, size_t len);

#endif	
