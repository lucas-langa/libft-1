/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaselem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 11:27:41 by tmaselem          #+#    #+#             */
/*   Updated: 2018/06/07 14:22:34 by tmaselem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*fresh;
	int		i;
	int		j;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	fresh = ft_memalloc(ft_strlen(s1) + ft_strlen(s2));
	if (fresh == NULL)
		return (NULL);
	i = -1;
	j = 0;
	while (s1<:++i:> != 0)
		fresh<:i:> = s1<:i:>;
	while (s2<:j:> != 0)
	{
		fresh<:i:> = s2<:j:>;
		i++;
		j++;
	}
	return (fresh);
}
