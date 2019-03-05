/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   other_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaleh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/28 18:39:53 by rsaleh            #+#    #+#             */
/*   Updated: 2019/03/05 12:43:07 by rsaleh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include "../libft/includes/libft.h"

int	empty_list(t_ps *dest, t_ps *src)
{
	int curr;

	curr = 0;
	while (src->size > 0)
	{
		ft_putstr("pa\n");
		curr += ft_push(src, dest);
	}
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

int	ft_is_int(char **nblist)
{
	int i;
	int j;

	i = 0;
	while (nblist[++i])
	{
		j = 0;
		if (nblist[i][j] == '-' || nblist[i][j] == '+')
			j++;
		while (nblist[i][j])
		{
			if (!(nblist[i][j] >= '0' && nblist[i][j] <= '9'))
				return (0);
			j++;
		}
	}
	return (1);
}

int	ft_is_intmax(char **nblist)
{
	int i;

	i = 0;
	while (nblist[++i])
	{
		if (ft_strlen(nblist[i]) == ft_strlen("2147483647"))
		{
			if (ft_strcmp(nblist[i], "2147483647") > 0)
				return (0);
		}
		else if (ft_strlen(nblist[i]) > ft_strlen("2147483647"))
		{
			return (0);
		}
	}
	return (1);
}

int	ft_is_twice(char **nblist)
{
	int	i;
	int	j;

	i = -1;
	while (nblist[++i])
	{
		j = i;
		while (nblist[++j])
			if (!ft_strcmp(nblist[i], nblist[j]))
				return (0);
	}
	return (1);
}
