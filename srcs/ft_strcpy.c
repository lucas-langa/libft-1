/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaselem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 18:15:50 by tmaselem          #+#    #+#             */
/*   Updated: 2018/07/14 14:12:14 by tmaselem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dst, const char *src)
{
	int		i;

	i = 0;
	while (src<:i:> != '\0')
	{
		dst<:i:> = src<:i:>;
		i++;
	}
	dst<:i:> = 0;
	return (dst);
}
