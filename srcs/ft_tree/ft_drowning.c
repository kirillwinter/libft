/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_drowning.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wballaba <wballaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/01 19:50:07 by wballaba          #+#    #+#             */
/*   Updated: 2019/03/01 21:30:08 by wballaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** функция позволяет утонуть элементу с указанной позиции
*/
void	ft_drowning(t_pqueue *pqueue, size_t pos)
{
	int per;
	int cleft;
	int	cright;
	while (pos < pqueue->length)
	{
		per = pqueue->nodes[pos].priority;
		cleft = pqueue->nodes[1 + 2 * pos].priority;
		cright = pqueue->nodes[2 + 2 * pos].priority;
		if ((2 + 2 * pos) == pqueue->length)
		{
			if (pqueue->nodes[pos].priority < pqueue->nodes[1 + 2 * pos].priority)
			{

				ft_swap(&pqueue->nodes[pos].priority, &pqueue->nodes[1 + 2 * pos].priority);
				ft_swap_ptr(&pqueue->nodes[pos].content, &pqueue->nodes[1 + 2 * pos].content);
			}
			break ;
		}
		else if (pqueue->nodes[pos].priority < MAX(pqueue->nodes[1 + 2 * pos].priority, pqueue->nodes[2 + 2 * pos].priority))
		{
			if (pqueue->nodes[2 + 2 * pos].priority > pqueue->nodes[1 + 2 * pos].priority)
			{
				ft_swap(&pqueue->nodes[pos].priority, &pqueue->nodes[2 + 2 * pos].priority);
				ft_swap_ptr(&pqueue->nodes[pos].content, &pqueue->nodes[2 + 2 * pos].content);				
				// ft_swap_ptr(&pqueue->nodes[pos], &pqueue->nodes[2 + 2 * pos]);
				pos = 2 * pos + 2;
			}
			else
			{
				ft_swap(&pqueue->nodes[pos].priority, &pqueue->nodes[1 + 2 * pos].priority);
				ft_swap_ptr(&pqueue->nodes[pos].content, &pqueue->nodes[1 + 2 * pos].content);
				// ft_swap_ptr(&pqueue->nodes[pos], &pqueue->nodes[1 + 2 * pos]);
				pos = 2 * pos + 1;
			}
		}
		else
			break ;
		
	}
}