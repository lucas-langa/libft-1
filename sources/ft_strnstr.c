/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaselem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 13:15:32 by tmaselem          #+#    #+#             */
/*   Updated: 2018/05/31 13:47:01 by tmaselem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	x;
	int		i;

	if (needle[0] == 0 || ft_strlen(needle) == 0)
		return ((char *)haystack);
	x = 0;
	i = 0;
	while (haystack[i] != 0 && len != 0)
	{
		if (haystack[i] == needle[x])
			x++;
		else
			x = 0;
		if (needle[x] == 0)
			return ((char *)(haystack - x + 1));
		i++;
		len--;
	}
	return (NULL);
}
