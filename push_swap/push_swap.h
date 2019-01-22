/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaleh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 17:43:57 by rsaleh            #+#    #+#             */
/*   Updated: 2019/01/22 22:41:04 by rsaleh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

typedef struct	s_ps
{
	int			*list;
	int			size;
}				t_ps;

int				*ft_push_ab(int **src, int **dest);
int				*ft_swap_ab(int	*ret);
#endif
