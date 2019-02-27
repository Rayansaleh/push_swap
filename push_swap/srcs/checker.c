void	ft_checker(t_ps a)
{
	
}

int	main(int ac, char **av)
{
	t_ps	a;
	int	i;

	if (ac < 2)
		return (0);
	if (!ft_is_twice(av) || !ft_is_int(av) || !ft_is_intmax(av))
	{
		ft_putstr("Error\n");
		return (0);
	}
	a = create_list(av);
	i = a.size;
	ft_checker(a);
	while (--i >= 0)
		printf("%d\n", a.list[i]);
	return (0);
}
