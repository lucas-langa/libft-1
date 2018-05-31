/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaselem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 13:07:25 by tmaselem          #+#    #+#             */
/*   Updated: 2018/05/30 16:28:36 by tmaselem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	k;
	int		in;

	in = 0;
	k = 0;
	i = ft_strlen(dst);
	j = ft_strlen(src);
	if (dstsize <= i)
		return (j + dstsize);
	while (dst[k] != 0 && k < (dstsize - 1))
		k++;
	while (src[in] != 0 && k < (dstsize - 1))
	{
		dst[k] = src[in];
		k++;
		in++;
	}
	dst[k] = 0;
	return (i + j);
}
