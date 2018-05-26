/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaselem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/26 09:04:12 by tmaselem          #+#    #+#             */
/*   Updated: 2018/05/26 12:25:10 by tmaselem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	char		*dst;
	const char	*sorc;
	int			i;

	dest = dst;
	sorc = src;
	i = 0;
	while (n != 0 )
	{
		dest[i] = sorc[i];
		i++;
		n--;
	}
	return (dst);
}
