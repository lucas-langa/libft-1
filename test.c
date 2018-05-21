/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaselem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 09:11:11 by tmaselem          #+#    #+#             */
/*   Updated: 2018/05/21 14:17:25 by tmaselem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./headers/libft.h"

int		main(int ac, char **av)
{
	if (ac == 2)
	{
		ft_putstr("This is ");
		ft_putnbr(ft_strlen(av[1]));
		ft_putstr(" chars long\n");
		ft_putstr("Your word is: \n");
		ft_putstr(av[1]);
		ft_putchar('\n');
	}

	return (0);
}
