/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   other_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaleh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/28 18:39:53 by rsaleh            #+#    #+#             */
/*   Updated: 2019/01/28 18:56:35 by rsaleh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	empty_list(t_ps *dest, t_ps *src)
{
	int curr;

	curr = 0;
	while (src->size > 0)
		curr += ft_push(src, dest);
	return (curr);
}

int	ft_find_max(t_ps s, int *max)
{
	int i;

	i = 0;
	*max = s.list[0];
	while (++i < s.size)
		if (s.list[i] < *max)
			*max = s.list[i];
	i = 0;
	while (s.list[i] != *max)
		i++;
	return (i);
}
