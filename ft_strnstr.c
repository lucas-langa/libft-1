/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaselem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 12:31:23 by tmaselem          #+#    #+#             */
/*   Updated: 2018/06/07 15:08:48 by tmaselem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (ft_strlen(needle) == 0 )
		return ((char *)haystack);
	while (haystack[i] != 0 && i < 1 + len - ft_strlen(needle))
	{
		j = 0;
		while (needle[j] == haystack[i + j] &&
				haystack[i + j] != 0 && needle[j] != 0)
		{
			if (needle[j + 1] == 0)
				return ((char *)haystack + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
