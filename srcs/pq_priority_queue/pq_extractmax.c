/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pq_extractmax.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wballaba <wballaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/28 15:22:09 by wballaba          #+#    #+#             */
/*   Updated: 2019/03/02 15:27:02 by wballaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** функция извлекает максимальный элемент (вершину) бинарной кучи
*/

void	*pq_extractmax(t_pqueue *pqueue)
{
	void	*ret;

	ret = pqueue->nodes[0].content;
	pq_swap_node(pqueue, 0, pqueue->length - 1);
	pqueue->length--;
	pq_drowning(pqueue, 0);
	return (ret);
}
