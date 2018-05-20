/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaselem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/20 13:46:59 by tmaselem          #+#    #+#             */
/*   Updated: 2018/05/20 16:32:17 by tmaselem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(int ac, char **av)
{
	if (ac == 2)
	{
		ft_putstr("This string is ");
		ft_putnbr(ft_strlen(av[1]));
		ft_putstr(" long\n");
		ft_putstr(av[1]);
		ft_putchar('\n');
	}

	return (0);
}
