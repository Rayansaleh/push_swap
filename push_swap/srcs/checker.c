/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaleh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 16:32:47 by rsaleh            #+#    #+#             */
/*   Updated: 2019/03/05 12:45:10 by rsaleh           ###   ########.fr       */
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
	if (!(ret.list = (int*)malloc(sizeof(int) * i + 1)))
		return (ret);
	ret.size = i - 1;
	fill_check_list(&ret, av);
	return (ret);
}

void	ft_checker(t_ps *a, t_ps *b, char **tst)
{
	if (**tst == 's')
	{
		(*tst)++;
		(**tst == 'b') ? ft_check_swap(b) : 0;
		(**tst == 'a') ? ft_check_swap(a) : 0;
	}
	else if (**tst == 'p')
	{
		(*tst)++;
		(**tst == 'a') ? ft_check_push(b, a) : 0;
		(**tst == 'b') ? ft_check_push(a, b) : 0;
	}
	else if (**tst == 'r')
	{
		(*tst)++;
		(**tst == 'a') ? ft_check_rotate(a) : 0;
		(**tst == 'b') ? ft_check_rotate(b) : 0;
		if (**tst == 'r')
		{
			(*tst)++;
			(**tst == 'a') ? ft_check_revrotate(a) : 0;
			(**tst == 'b') ? ft_check_revrotate(b) : 0;
		}
	}
}

int		valid_list(t_ps s)
{
	int i;

	i = 0;
	while (s.list[i] < s.list[i + 1] && s.list[i])
		i++;
	if (i + 1 >= s.size)
		return (1);
	else
		return (0);
}

int		main(int ac, char **av)
{
	char	*tst;
	t_ps	a;
	t_ps	b;
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
	if (!(b.list = (int*)malloc(sizeof(int) * a.size)))
		return (0);
	while (get_next_line(0, &tst) != 0)
		ft_checker(&a, &b, &tst);
	if ((valid_list(a) == 1))
		ft_putstr("OK\n");
	else
		ft_putstr("KO\n");
	free(a.list);
	free(b.list);
	return (0);
}
