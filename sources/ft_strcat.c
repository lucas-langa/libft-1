/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaselem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/27 16:11:45 by tmaselem          #+#    #+#             */
/*   Updated: 2018/06/05 15:27:47 by tmaselem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Omitted ft_strlen to avoid large string len (I know what I mean bish)
*/

char	*ft_strcat(char *s1, const char *s2)
{
	int	i;
	int	j;

	i = 0;
	while (s1[i] != 0)
		i++;
	j = 0;
	while (s2[j] != 0)
	{
		s1[i + j] = s2[j];
		j++;
	}
	s1[i + j] = 0;
	return (s1);
}
