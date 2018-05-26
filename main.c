/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaselem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/20 13:46:59 by tmaselem          #+#    #+#             */
/*   Updated: 2018/05/26 17:23:18 by tmaselem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "headers/libft.h"

int		main(int ac, char **av)
{
	printf("%s", ft_memcpy(av[1], av[2], atoi(av[3])));
	return (0);
}
