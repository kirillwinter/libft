/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pqueue_init.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wballaba <wballaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/01 19:03:28 by wballaba          #+#    #+#             */
/*   Updated: 2019/03/01 21:00:15 by wballaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** функция инициализирует очередь с приоритетом
*/
t_pqueue	*ft_pqueue_init(size_t size)
{
	t_pqueue	*new;

	if (!(new = (t_pqueue *)ft_memalloc(sizeof(*new))))
		return (NULL);
	if (!(new->nodes = (t_pqueue_node*)ft_memalloc(size * sizeof(t_pqueue_node))))
		return (NULL);
	new->size = size;
	return (new);
}
