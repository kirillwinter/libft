/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pq_insert.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wballaba <wballaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/28 15:41:31 by wballaba          #+#    #+#             */
/*   Updated: 2019/03/02 15:27:34 by wballaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** функция добавляет новй элемент в бинарную кучу
*/

int	pq_insert(t_pqueue *pqueue, void *content, int priority)
{
	size_t	pos;

	if (pqueue->length == pqueue->size)
		return (0);
	pos = pqueue->length;
	pqueue->nodes[pos].content = content;
	pqueue->nodes[pos].priority = priority;
	pqueue->length++;
	pq_ascent(pqueue, pos);
	return (1);
}
