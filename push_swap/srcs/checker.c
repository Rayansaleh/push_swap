/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaleh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 16:32:47 by rsaleh            #+#    #+#             */
/*   Updated: 2019/02/27 18:13:39 by rsaleh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Get_Next_Line/get_next_line.h"
#include "../libft/includes/libft.h"
#include "../push_swap.h"
#include <stdio.h>

void	fill_check_list(t_ps *ret, char **av)
{
	int *tmp;
	int i;

	i = 0;
	tmp = ret->list;
	while (++i < ret->size + 1)
	{
		*tmp = ft_atoi(av[i]);
		tmp++;		
	}
}

t_ps	create_checker_list(char **av)
{
	int		i;
	t_ps	ret;

	i = 1;
	while (av[i])
		i++;
	if (!(ret.list = (int*)malloc(sizeof(int) * i)))
		return (ret);
	ret.size = i - 1;
	fill_check_list(&ret, av);
	return (ret);
}

void ft_checker(t_ps a, char **tst)
{
	ft_check_swap(&a);
}

int	main(int ac, char **av)
{
	char	*tst;
	t_ps	a;
	int		i;

	i = -1;
	if (ac < 2)
		return (0);
	if (!ft_is_twice(av) || !ft_is_int(av) || !ft_is_intmax(av))
	{
		ft_putstr("Error\n");
		return (0);
	}
	a = create_checker_list(av);
	ft_checker(a, &tst);
	while (++i < a.size)
		printf("%d\n", a.list[i]);
	//while (get_next_line(0, &tst) != 0)
	//	ft_checker(a);
	return (0);
}
