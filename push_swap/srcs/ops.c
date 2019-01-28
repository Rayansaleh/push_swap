/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaleh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 17:31:02 by rsaleh            #+#    #+#             */
/*   Updated: 2019/01/28 20:40:37 by rsaleh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int ft_swap_ab(t_ps *a, t_ps *b)
{
    int *tmp;
	int size;
	int temp;

	tmp = a->list;
	size = a->size;
	if (a->size < 2)
		return (0);
	temp = tmp[size - 1];
	tmp[size -1] = tmp[size - 2];
	tmp[size - 2] = temp;
	if (b)
		ft_swap_ab(b, NULL);
	return (1);
}

int ft_push(t_ps *a, t_ps *b)
{
	int *ta;
	int *tb;

	ta = a->list;
	tb = b->list;
	if (a->size < 1)
		return (0);
	b->size++;
	tb[b->size - 1] = ta[a->size - 1];
	a->size--;
	return (1);
}

int ft_rotate(t_ps *a, t_ps *b)
{
	int temp;
	int size;
	int *tmp;

	tmp = a->list;
	size = a->size + 1;
	if (a->size < 2)
		return (0);
	temp = tmp[size - 2];
	while (--size >= 2)
		tmp[size - 1] = tmp[size - 2];
	tmp[0] = temp;
	if (b)
		ft_rotate(b, NULL);
	return (1);
}

int ft_revrotate(t_ps *a, t_ps *b)
{
	int temp;
	int *tmp;
	int i;
	int size;

	i = -1;
	tmp = a->list;
	size = a->size;
	if (a->size < 2)
		return (0);
	temp = tmp[0];
	while (++i < size)
		tmp[i] = tmp[i + 1];
	tmp[size - 1] = temp;
	if (b)
		ft_revrotate(b, NULL);
	return (1);
}
