/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaselem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 07:23:37 by tmaselem          #+#    #+#             */
/*   Updated: 2018/05/25 14:36:49 by tmaselem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"

int		ft_atoi(const char *str)
{
	int	sign;
	int num;
	int i;

	i = 0;
	sign = 1;
	num = 0;
	
	while (str[i] >= 9 && str[i] <= 13)
	{
		i++;
	}
	if (str[i] == 45)
	{
		sign = -1;
		i++;
	}
	while (ft_isdigit(str[i]) == 1)
	{
		num = (num * 10) + (str[i] - 48);
		i++;
	}
	return (num * sign);
}
