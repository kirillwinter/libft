/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pq_inline_funcs.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wballaba <wballaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/02 15:16:19 by wballaba          #+#    #+#             */
/*   Updated: 2019/03/02 15:27:25 by wballaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

inline int	pq_compare_priority(t_pqueue *pqueue, size_t a, size_t b)
{
	return (pqueue->nodes[a].priority < pqueue->nodes[b].priority);
}

inline int	pq_priority(t_pqueue *pqueue, size_t pos)
{
	return (pqueue->nodes[pos].priority);
}
