/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaselem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 15:46:44 by tmaselem          #+#    #+#             */
/*   Updated: 2018/06/07 15:07:20 by tmaselem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	i;

	i = 0;
	while (src[i] != 0)
	{
		dst[i] = src[i];
		i++;
		if (i == len)
			return (dst);
	}
	while (i < len)
	{
		dst[i] = 0;
		i++;
	}
	return (dst);
}
