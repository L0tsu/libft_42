/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumoreau <jumoreau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 13:16:35 by jumoreau          #+#    #+#             */
/*   Updated: 2021/06/09 18:22:59 by lotus            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <stddef.h>
# include <stdbool.h>
//----------------------------PART 1--------------------------------------- DONE
size_t		ft_strlen(const char *str);
int			ft_isalpha(int c);
int			ft_isdigit(int c);
int			ft_isalnum(int c);
int			ft_isascii(int c);
int			ft_isprint(int c);
char		ft_toupper(char c);
char		ft_tolower(char c);
int			ft_atoi(const char *str);
int			ft_strncmp(const char *str, const char *str1, size_t n);
char		*ft_strnstr(const char *str, const char *str1, size_t n);
char		*ft_strchr(char *str, int c);
char		*ft_strrchr(char *str, int c);
char		*ft_memset(void *src, int value, size_t size);
void		ft_bzero(void *str, size_t size);
char		*ft_memcpy(void *dst, const void *src, size_t num);
char		*ft_memccpy(void *restrict dest, void *restrict src,
				int c, size_t num);
char		*ft_memchr(void *str, int value, size_t num);
char		*ft_memmove(void *to, const void *from, size_t size);
int			ft_memcmp(void *ptr, void *ptr1, size_t n);
size_t		ft_strlcpy(char *dst, const char *src, size_t size);
size_t		ft_strlcat(char *dest, const char *src, size_t size);
char		*ft_strdup(const char *s);
void		*ft_calloc(size_t num, size_t size);
//-----------------------------PART 2---------------------------------------1/10
char		*ft_substr(char const *s, unsigned int start, size_t len);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strtrim(char const *s1, char const *set);
char		**ft_split(char const *s, char c);
char		*ft_itoa(int n);
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));

#endif
