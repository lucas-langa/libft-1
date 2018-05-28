/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaselem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 09:11:11 by tmaselem          #+#    #+#             */
/*   Updated: 2018/05/28 10:01:03 by tmaselem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./headers/libft.h"
#include <stdio.h>

int		main(int ac, char **av)
{
	//unsigned char test[100];

	if (ac == 2)
	{
		ft_putnbr(-1);
		ft_putnbr(ft_atoi(av[1]));
		ft_putstr("This is ");
		ft_putnbr(ft_strlen(av[1]));
		ft_putstr(" chars long\n");
		ft_putstr("Your word is: \n");
		ft_putstr(av[1]);
		ft_putchar(10);
		if (ft_isdigit(av[1][0]) == 1)
		{
			ft_putchar(av[1][0]);
			ft_putstr(" is a digit\n");
		}
	}
	if (ac == 3)
	{
		ft_putstr("Testing bzero!\n");
		ft_bzero(av[1], ft_atoi(av[2]));
		ft_putstr(av[1]);
		ft_putchar(10);
	}
	if (ac == 4)
	{
		//ft_putstr(ft_memset(av[1], ft_atoi(av[2]),ft_atoi(av[3])));
		//ft_putchar(10);
		//ft_putstr("testing for memcpy\n");
		//ft_putstr(ft_memcpy(av[1], av[2], ft_atoi(av[3])));
		//ft_putchar(10);
		//ft_putnbr(ft_atoi(av[3]));
		ft_putstr("\nTesting memmove\n");
		ft_putstr((const char *)ft_memmove(av[1], av[2], ft_atoi(av[3])));
		//ft_putchar(10);
		//ft_putstr("Testing memchr\n");
		//printf("%s", ft_memchr(av[1], av[2][0], ft_atoi(av[3])));
		//ft_putstr("Testing memcmp\n");
		//ft_putnbr(ft_memcmp(av[1], av[2], ft_atoi(av[3])));
		ft_putchar(10);
	}
	if (ac == 5)
	{
		ft_putstr("Test memccpy!\n");
		//test = (unsigned  char *)ft_memccpy(av[1], av[2], av[3][0], ft_atoi(av[4]));
		//ft_putstr(test);
		printf("%s", ft_memccpy(av[1], av[2], av[3][0], ft_atoi(av[4])));
		ft_putchar(10);
	}
	return (0);
}
