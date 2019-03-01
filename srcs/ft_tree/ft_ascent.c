/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ascent.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wballaba <wballaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/01 19:42:50 by wballaba          #+#    #+#             */
/*   Updated: 2019/03/01 20:48:21 by wballaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** функция позволяет всплыть элементу с указанной позиции
*/
void	ft_ascent(t_pqueue *pqueue, size_t pos)
{
	while (pos > 1)
	{
		if (pqueue->nodes[pos / 2].priority < pqueue->nodes[pos].priority)
		{
			ft_swap(&pqueue->nodes[pos / 2].priority, &pqueue->nodes[pos].priority);
			ft_swap_ptr(&pqueue->nodes[pos / 2].content, &pqueue->nodes[pos].content);
			// ft_swap_ptr(&pqueue->nodes[pos / 2], &pqueue->nodes[pos]);
			pos /= 2;
		}
		else
			break ;
	}
}
