/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaselem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 10:35:17 by tmaselem          #+#    #+#             */
/*   Updated: 2018/06/07 14:09:33 by tmaselem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*str;
	int				i;

	if (len == 0)
	{
		return (b);
	}
	str = (unsigned char *)b;
	i = 0;
	while (len != 0)
	{
		str[i] = (unsigned char)c;
		len--;
		i++;
	}
	return (b);
}
