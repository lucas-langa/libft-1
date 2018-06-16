/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaselem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/16 23:47:04 by tmaselem          #+#    #+#             */
/*   Updated: 2018/06/17 00:06:31 by tmaselem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(const void *content, size_t consize)
{
	t_list	*drone;

	if (!(drone = ft_memalloc(sizeof(t_list))))
		return (NULL);
	if (content == NULL)
	{
		list->content = NULL;
		list->consize = 0;
	}
	else
	{
		if ((list->content = ft_memalloc(consize)) == NULL)
			return (NULL);
		ft_memcpy(list->content, content, consize);
		list->consize = consize;
	}
	return (drone);
}
