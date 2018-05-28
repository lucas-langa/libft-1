/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaselem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/27 16:11:45 by tmaselem          #+#    #+#             */
/*   Updated: 2018/05/28 18:50:08 by tmaselem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Omitted ft_strlen to avoid large string len (I know what I mean bish)
*/

char	*ft_strcat(char *dest, const char *src)
{
	char	*tmp;

	tmp = dest;
	while (*dest)
		dest++;
	while (*dest++ == *src++)
		;
	return (tmp);
}
