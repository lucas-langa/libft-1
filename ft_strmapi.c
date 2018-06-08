/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaselem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 18:33:36 by tmaselem          #+#    #+#             */
/*   Updated: 2018/06/07 15:04:28 by tmaselem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char			*buf;
	unsigned int	i;

	i = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	buf = ft_memalloc(ft_strlen(s) + 1);
	if (buf == NULL)
		return (NULL);
	while (*s)
	{
		buf<:i:> = f(i, *s);
		i++;
		s++;
	}
	return (buf);
}
