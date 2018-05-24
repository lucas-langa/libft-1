/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaselem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 17:09:31 by tmaselem          #+#    #+#             */
/*   Updated: 2018/05/24 16:59:12 by tmaselem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>
# include <stddef.h>
# include <string.h>

size_t	ft_strlen(const char *str);
void	ft_putchar(const char c);
void	ft_putstr(const char *str);
void	ft_putnbr(int num);
int		ft_isdigit(const char c);
void	*ft_memset(void *b, int c,size_t len);
int		ft_atoi(const char *str);
#endif
