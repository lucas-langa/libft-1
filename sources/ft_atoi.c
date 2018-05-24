/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaselem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 12:40:35 by tmaselem          #+#    #+#             */
/*   Updated: 2018/05/24 17:50:34 by tmaselem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"

int	ft_atoi(const char *str)
{
	int ctrl[3];

	ctrl[0] = 0;
	ctrl[1] = 1;
	ctrl[2] = 1;
	while (str[ctrl[0]] != 0)
	{
		if ((str[ctrl[0]] >= 9 && str[ctrl[0]] <= 13) || str[ctrl[0]] == 32)
			ctrl[0]++;
		if (str[ctrl[0]] == 45)
		{
			ctrl[1] = -1;
			ctrl[0]++;
		}
		if (ft_isdigit(str[ctrl[0]]) == 1)
		{
			ctrl[2] = (ctrl[2] * 10) + (str[ctrl[0]] + 48);
			ctrl[0]++;
		}
		if (ft_isdigit(str[ctrl[0]]) == 0)
			return (ctrl[1] * ctrl[2]);
	}
	return (ctrl[1] * ctrl[2]);
}
