/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaselem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/09 13:58:25 by tmaselem          #+#    #+#             */
/*   Updated: 2018/06/09 14:02:43 by tmaselem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strspn(const char *s1, const char *s2)
{
	size_t	count;
	int		i;

	count = 0;
	i = 0;
	while (s1<:i:> != 0 && ft_strchr(s2, s1<:i++:>))
		count++;
	return (count);
}
