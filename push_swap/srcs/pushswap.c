/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaleh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 17:56:34 by rsaleh            #+#    #+#             */
/*   Updated: 2019/01/28 19:56:07 by rsaleh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include "../libft/includes/libft.h"
#include <stdio.h>

void	fill_list(t_ps *ret, char **av)
{
	int	*tmp;
	int	i;

	i = 0;
	tmp = ret->list;
	while (av[++i])
	{
		*tmp = ft_atoi(av[i]);
		tmp++;
	}
}

t_ps	create_list(char **av)
{
	int		i;
	t_ps	ret;

	i = 1;
	while (av[i])
		i++;
	if (!(ret.list = (int*)malloc(sizeof(int) * i)))
		return (ret);
	ret.size = i - 1;
	fill_list(&ret, av);
	return (ret);
}

void	ft_push_swap(t_ps a)
{
	t_ps	b;
	int		wsort;
	int		curr;

	if (!(b.list = (int*)malloc(sizeof(int) * a.size)))
		return ;
	b.size = 0;
	if (a.size > 2 && (wsort = select_sort(&a, 0)))
	{
		curr = ft_sort(&a, &b, wsort);	
	}
}

int	main(int ac, char **av)
{
	t_ps a;

	if (ac < 2)
		return (0);
	a = create_list(av);
	ft_push_swap(a);
	while (a.size)
	{
		printf("%d\n", *a.list);
		a.list++;
		a.size--;
	}
	return (0);
}
