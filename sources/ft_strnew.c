/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaselem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 15:42:09 by tmaselem          #+#    #+#             */
/*   Updated: 2018/06/04 16:04:00 by tmaselem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"

char	*ft_strnew(size_t size)
{
	char	*fresh;

	fresh = (char*)malloc(sizeof(char) * (size + 1));
	if (fresh == NULL)
		return (NULL);
	ft_memset(fresh, 0, size + 1);
	return (fresh);
}
