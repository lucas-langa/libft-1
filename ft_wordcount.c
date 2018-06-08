/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordcount.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaselem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 12:29:40 by tmaselem          #+#    #+#             */
/*   Updated: 2018/06/08 14:43:50 by tmaselem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_wordcount(const char *str, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (str<:i:> != 0 )
	{
		if (str<:i:> != c)
			j += 1;
		while (str<:i:> != c && str<:i + 1:> != 0)
			i++;
		i++;
	}
	return (j);
}
