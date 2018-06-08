/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaselem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 07:23:37 by tmaselem          #+#    #+#             */
/*   Updated: 2018/06/07 13:33:40 by tmaselem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int	stuf[3];

	stuf[0] = 0;
	stuf[1] = 1;
	stuf[2] = 0;
	while ((str[stuf[0]] == 9 || str[stuf[0]] == 10 || str[stuf[0]] == 11 ||
				str[stuf[0]] == 12 || str[stuf[0]] == 13) || str[stuf[0]] == 32)
		stuf[0]++;
	while (str[stuf[0]] == 45 || str[stuf[0]] == 43)
	{
		if (str[stuf[0]] == 45)
			stuf[1] = -1;
		stuf[0]++;
	}
	while (ft_isdigit(str[stuf[0]]) == 1)
	{
		stuf[2] = (stuf[2] * 10) + (str[stuf[0]] - 48);
		stuf[0]++;
	}
	return (stuf[2] * stuf[1]);
}
