/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_insert.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wballaba <wballaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/28 15:41:31 by wballaba          #+#    #+#             */
/*   Updated: 2019/03/01 21:00:44 by wballaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** функция добавляет новй элемент в бинарную кучу
*/

int	ft_insert(t_pqueue	*pqueue, void *content, int priority)
{
	size_t	pos;

	pos = pqueue->length;
	pqueue->nodes[pos].content = content;
	pqueue->nodes[pos].priority = priority;
	pqueue->length++;
	ft_ascent(pqueue, pos);
	return (1);
}
