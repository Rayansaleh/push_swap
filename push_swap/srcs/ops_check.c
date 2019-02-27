/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops_check.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaleh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 18:06:07 by rsaleh            #+#    #+#             */
/*   Updated: 2019/02/27 18:43:53 by rsaleh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_check_swap(t_ps *s)
{
	int *tmp;
	int size;
	int temp;

	tmp = s->list;
	size = s->size;
	if (s->size < 2)
		return (0);
	temp = tmp[0];
	tmp[0] = tmp[1];
	tmp[1] = temp;
	return(1);
}

int	ft_check_push(t_ps *s1, t_ps *s2)
{
	int *ts1;
	int *ts2;
	int tp;
	int i;
	int tmp;

	i = -1;
	ts1 = s1->list;
	ts2 = s2->list;
	if (s1->size < 1)
		return (0);
	tp = ts1->list[0];
	while (++i < s1->size)
		if (s1->list[i + 1])	
			s1->list[i] = s1->list[i + 1];
	i = -1;
	tmp = s2->list[1];
	s2->list[++i] = s2->list[i + 1];
	while (++i < s2->size + 1)
		if (s2->list[i])
		{
					
		}
}
