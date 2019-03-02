/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops_check.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaleh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 18:06:07 by rsaleh            #+#    #+#             */
/*   Updated: 2019/03/02 19:08:53 by rsaleh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include <stdio.h>

int	ft_check_swap(t_ps *s)
{
	int *tmp;
	int size;
	int temp;

	tmp = s->list;
	size = s->size;
	printf("size:%d\n", size);
	if (s->size < 2)
		return (0);
	temp = tmp[0];
	tmp[0] = tmp[1];
	tmp[1] = temp;
	return(1);
}

int	ft_check_push(t_ps *s, t_ps *s2)
{
	int val;

	if (s->size < 1)
		return (0);
	val = ft_remove(s, s->size);
	ft_add(s2, val, 0, s2->size);
	s->size--;
	s2->size++;
	return (1);
}

int ft_check_rotate(t_ps *s)
{
	int val;
	int i;

	if (s->size < 2)
		return (0);
	val = ft_remove(s, s->size);
	s->list[s->size - 1] = val;
	return (1);
}

int	ft_check_revrotate(t_ps *s)
{
	int val;
	int i;

	i = s->size;
	if (s->size < 2)
		return (0);
	val = s->list[s->size - 1];
	s->list[s->size] = -1;
	while (--i >= 0)
		s->list[i] = s->list[i - 1];
	s->list[0] = val;
	return (1);
}
