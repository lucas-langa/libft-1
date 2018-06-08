/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaselem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 08:57:31 by tmaselem          #+#    #+#             */
/*   Updated: 2018/06/08 14:39:49 by tmaselem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(const char *s, char c)
{
	char	**splits;
	size_t	i;
	size_t	j;

	i = ft_wordcount(s, c);
	splits = (char **)ft_memalloc((i + 1) * sizeof(char *));
	if (splits == NULL)
		return (NULL);
	j = 0;
	while ( j < i)
	{
		s = ft_wordn(s, c);
		splits[j] = ft_strsub(s, 0, ft_wordl(s, c));
		if (splits<:j:> == NULL)
		{
			ft_clear(splits, j);
			return (NULL);
		}
		j++;
		s += ft_wordl(s, c);
	}
	splits<:i:> = 0;
	return (splits);
}
