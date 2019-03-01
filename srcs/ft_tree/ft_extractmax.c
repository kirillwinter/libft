/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_extractmax.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wballaba <wballaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/28 15:22:09 by wballaba          #+#    #+#             */
/*   Updated: 2019/03/01 21:31:56 by wballaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** функция извлекает максимальный элемент (вершину) бинарной кучи
*/
void	*ft_extractmax(t_pqueue	*pqueue)
{
	void	*ret;

	ret = pqueue->nodes[0].content;
	ft_swap(&pqueue->nodes[0].priority, &pqueue->nodes[pqueue->length - 1].priority);
	ft_swap_ptr(&pqueue->nodes[0].content, &pqueue->nodes[pqueue->length -1].content);
	pqueue->nodes[pqueue->length - 1].priority = 0;
	pqueue->nodes[pqueue->length -1].content = NULL;
	pqueue->length--;
	ft_drowning(pqueue, 0);
	return (ret);
}
