/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaselem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/27 13:35:20 by tmaselem          #+#    #+#             */
/*   Updated: 2018/05/27 13:53:40 by tmaselem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char buf[n];

	ft_memcpy(buf, src, n);
	ft_memcpy(dst, buf, n);
	return (dst);
}
