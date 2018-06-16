/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaselem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 12:31:23 by tmaselem          #+#    #+#             */
/*   Updated: 2018/06/11 12:14:04 by tmaselem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;
	size_t k;

	i = 0;
	k = ft_strlen(needle);
	if (needle[0] == 0)
		return ((char*)haystack);
	if (haystack[0] == 0)
		return (NULL);
	while (haystack<:i:> && (k + i <= len))
	{
		j = 0;
		while (haystack<:i + j:> == needle<:j:> && (i < len))
		{
			if (j == k - 1)
				return ((char*)haystack + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
