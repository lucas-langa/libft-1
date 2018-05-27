/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaselem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 17:09:31 by tmaselem          #+#    #+#             */
/*   Updated: 2018/05/27 17:27:00 by tmaselem         ###   ########.fr       */
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
void	*ft_memmove(void *dst, const void *src, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1,const void *s2, size_t n);
char	*ft_strcat(char *dest, const char *src);
#endif
