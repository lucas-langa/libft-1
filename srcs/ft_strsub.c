/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaselem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 11:05:32 by tmaselem          #+#    #+#             */
/*   Updated: 2018/06/07 15:10:34 by tmaselem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*fresh;

	if (s == NULL)
		return (NULL);
	fresh = ft_memalloc(len + 1);
	if (fresh == NULL)
		return (NULL);
	fresh = ft_strncpy(fresh, s + start, len);
	return (fresh);
}
