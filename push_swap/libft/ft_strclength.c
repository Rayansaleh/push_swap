/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclength.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaleh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 14:11:49 by rsaleh            #+#    #+#             */
/*   Updated: 2018/11/10 14:18:54 by rsaleh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strclength(char *s, char c)
{
	int i;

	i = 0;
	while (*s != c && *s)
	{
		i++;
		s++;
	}
	return (i);
}
