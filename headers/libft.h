/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaselem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 17:09:31 by tmaselem          #+#    #+#             */
/*   Updated: 2018/05/31 13:16:48 by tmaselem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>
# include <stddef.h>
# include <string.h>

size_t	ft_strlen(const char *str);
int		ft_putchar(int c);
void	ft_putstr(const char *str);
void	ft_putnbr(int num);
int		ft_isdigit(int c);
void	*ft_memset(void *b, int c,size_t len);
int		ft_atoi(const char *str);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memccpy(void *dst, const void *src, int c, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1,const void *s2, size_t n);
char	*ft_strcat(char *s1, const char *s2);
char	*ft_strchr(const char *s, int c);
int		ft_strcmp(const char *s1, const char *s2);
char	*ft_strcpy(char *dst, const char *src);
char	*ft_strncat(char *s1, const char *s2, size_t n);
char	*ft_strncpy(char *dst, const char *src, size_t len);
char	*ft_strdup(const char *s1);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
char	*ft_strrchr(const char *s, int c);
char	*ft_strstr(const char *haystack, const char *needle);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
#endif
