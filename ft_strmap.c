/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaselem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 15:45:33 by tmaselem          #+#    #+#             */
/*   Updated: 2018/06/07 15:04:03 by tmaselem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
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
		buf<:i:> = f(*s);
		i++;
		s++;
	}
	return (buf);
}
