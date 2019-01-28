/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaleh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 16:42:53 by rsaleh            #+#    #+#             */
/*   Updated: 2019/01/28 20:40:41 by rsaleh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include <stdio.h>

int	select_sort(t_ps *a, int bin)
{
	int i;
	int *tmp;

	i = 0;
	tmp = a->list;
	while (++i <= a->size - 3)
		if ((!bin && tmp[i] < tmp[i + 1]) || (bin && tmp[i] > tmp[i + 1]))
			return (1);
	if (((!bin && tmp[0] < tmp[1]) || (bin && tmp[0] > tmp[1])) &&
			((!bin && tmp[i] < tmp[i + 1]) || (bin && tmp[i] > tmp[i + 1])))
		return (3);
	if ((!bin && tmp[0] < tmp[1]) || (bin && tmp[0] > tmp[1]))
		return (2);
	if ((!bin && tmp[i] < tmp[i + 1]) || (bin && tmp[i] > tmp[i + 1]))
		return (4);
	return (0);
}

int	default_sort(t_ps *a, t_ps *b)
{
	int	curr;
	int	max;
	int	i_max;

	curr = 0;
	while (a->size > 3)
	{
		i_max = ft_find_max(*a, &max);
		if (max == a->list[a->size - 1])
			curr += ft_push(a, b);
		else if (i_max > (a->size / 2))
			curr += ft_rotate(a, NULL);
		else
			curr += ft_revrotate(a, NULL);
	}
	curr += slist_of_three(a);
	curr += empty_list(a, b);
	return (curr);
}

int	slist_of_three(t_ps *clist)
{
	int	curr;
	int	*tmp;

	curr = 0;
	tmp = clist->list;
	while (!(tmp[0] > tmp[1] && tmp[1] > tmp[2]))
	{
		if (tmp[0] > tmp[1] && tmp[1] < tmp[2] && tmp[0] < tmp[2])
			curr += ft_rotate(clist, NULL);
		else if (tmp[0] < tmp[1] && tmp[1] > tmp[2] && tmp[0] < tmp[2])
			curr += ft_revrotate(clist, NULL);
		else
			curr += ft_swap_ab(clist, NULL);
	}
	return (curr);
}

int	ft_simplesort(t_ps *a)
{
	ft_revrotate(a, NULL);
	ft_revrotate(a, NULL);
	ft_swap_ab(a, NULL);
	ft_rotate(a, NULL);
	ft_rotate(a, NULL);
	return (5);
}

int	ft_sort(t_ps *a, t_ps *b, int wsort)
{
	int curr;

	curr = 0;
	if (a->size == 3)
		curr += slist_of_three(a);
	else if (wsort == 3)
	{
		curr += ft_swap_ab(a, NULL);
		curr += ft_simplesort(a);	
	}
	else if (wsort == 4)
		curr += ft_swap_ab(a, NULL);
	else if (wsort == 2)
		curr += ft_simplesort(a);
	else
		curr += default_sort(a, b);
	if ((select_sort(a, 0) != 0))
		curr += ft_sort(a, b, 1);
	return (curr);
}
