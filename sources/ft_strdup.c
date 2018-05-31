/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaselem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 12:18:59 by tmaselem          #+#    #+#             */
/*   Updated: 2018/05/30 13:06:03 by tmaselem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;

	str = (char *)malloc(sizeof(*str) * (ft_strlen(s1) + 1));
	if (str == NULL)
		return (NULL);
	if (s1)
	{
		ft_strcpy(str, s1);
	}
	return (str);
}
