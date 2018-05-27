/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaselem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 12:49:48 by tmaselem          #+#    #+#             */
/*   Updated: 2018/05/27 09:03:36 by tmaselem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"

void	ft_putnbr(int num)
{
	if (num < 0)
	{
		ft_putchar(45);
		if (num <= -10)
			ft_putnbr(num / -10);
		ft_putchar(-(num % 10) + 48);
	}
	if (num >= 10)
	{
		ft_putnbr(num / 10);
		ft_putnbr(num % 10);
	}
	else
		ft_putchar(num + 48);
}
