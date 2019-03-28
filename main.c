#include "includes/libft.h"

void	is_under_21(char *name, int	age)
{
	ft_putstr(name);
	ft_putchar(32);
	ft_putstr("is");
	ft_putchar(32);
	ft_putnbr(age);
	ft_putchar(32);
	ft_putendl("that makes them too young to go out with me");
}

void	is_trev(int age)
{
	if ( age < 24)
		ft_putendl("Trevor, you are much older than that");
	else
		ft_putendl("I have said too much!");
}

void	is_legal(char *name, int age)
{
	ft_putstr(name);
	ft_putchar(32);
	ft_putstr("is");
	ft_putchar(32);
	ft_putnbr(age);
	ft_putchar(32);
	ft_putstr("they can party with me anyday!");
	ft_putchar(10);
}

int	main(int ac, char **av)
{
	int	age;
	char	*name;

	if (ac == 3)
	{
		age = ft_atoi(av[2]);
		name = ft_strdup(av[1]);
		if (ft_strcmp(name, "Trevor") == 0)
		{
			is_trev(age);
			return (0);
		}
		if (age >= 21)
		{
			is_legal(name, age);
			return (0);
		}
		if (age < 21)
		{
			is_under_21(name, age);
			return (0);
		}
		else
			ft_putendl("I do not know what to do with this");
	}
	ft_putstr(av[0]);
	ft_putchar(32);
	ft_putendl("Does not have the right number of arguments");
	return (0);
}
