/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_remove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaleh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/02 15:35:47 by rsaleh            #+#    #+#             */
/*   Updated: 2019/03/02 19:08:56 by rsaleh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int		ft_remove(t_ps *a, int len)
{
	int i;
	int first;

	i = 0;
	printf("len:%d\n", len);
	while (i < len && a->list[i] != -1)
	{
		if (i > 0)
			a->list[i - 1] = a->list[i];
		else
			first = a->list[i];
		i++;
	}
	a->list[i - 1] = -1;
	return (first);
}

void	ft_add(t_ps *a, int val, int order, int len)
{
	int i;
	int	tmp;
	int temp;

	i = -1;
	tmp = a->list[0];
	temp = 0;
	if (order == 0)
	{
		i = 0;
		while (++i <= len)
		{
			temp = a->list[i];
			a->list[i] = tmp;
			tmp = temp;
		}
		a->list[0] = val;
	}
}
