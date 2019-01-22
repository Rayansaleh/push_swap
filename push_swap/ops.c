/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaleh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 17:31:02 by rsaleh            #+#    #+#             */
/*   Updated: 2019/01/22 19:41:53 by rsaleh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_swap_ab(int *ret)
{
	int tmp;

	if	(!ret || !ret[1])
		return (ret);
	tmp = ret[0];
	ret[0] = ret[1];
	ret[1] = tmp;
	return (ret);
}

int	*ft_push_ab(int **src, int **dest)
{
	int	*tmp;
	int *ret;
	int size;
	
	while (dest++)
		size++;
	if (!(tmp = malloc((size + 1) * sizeof(int))))
		return (0);
	if (!src)
		return(*src);
	ret = tmp;
	*tmp = **src;
	**src = NULL;
	tmp++;
	while (++(*src))
	{
		*tmp = **src;
		tmp++;		
	}
	return (ret);
}
