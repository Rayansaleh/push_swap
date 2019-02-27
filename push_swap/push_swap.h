/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaleh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 17:43:57 by rsaleh            #+#    #+#             */
/*   Updated: 2019/02/27 18:11:13 by rsaleh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdlib.h>

typedef struct	s_ps
{
	int			*list;
	int			size;
}				t_ps;

int				ft_find_max(t_ps s, int *max);
int				empty_list(t_ps *dest, t_ps *src);
int				ft_is_int(char **nblist);
int				ft_is_intmax(char **nblist);
int				ft_is_twice(char **nblist);
int				ft_swap_ab(t_ps *a, t_ps *b);
int				ft_push(t_ps *a, t_ps *b);
int				ft_rotate(t_ps *a, t_ps *b);
int				ft_revrotate(t_ps *a, t_ps *b);
int				slist_of_three(t_ps *clist);
int				select_sort(t_ps *a, int bin);
int				ft_sort(t_ps *a, t_ps *b, int wsort);
int				ft_check_swap(t_ps *s);
#endif
