/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaselem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 18:36:39 by tmaselem          #+#    #+#             */
/*   Updated: 2018/05/28 18:44:46 by tmaselem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	char *tmp;

	tmp = s1;
	while (*s1)
		s1++;
	while (n > 0)
		if (!(*s1++ = *s2++))
			return (tmp);
	*s1 = 0;
	return (tmp);
}
