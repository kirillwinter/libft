/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wballaba <wballaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 14:34:06 by wballaba          #+#    #+#             */
/*   Updated: 2019/02/04 20:11:00 by wballaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** возвращает свежую область памяти инициализируемую нулами
*/

void	*ft_memalloc(size_t size)
{
	void *new;

	new = malloc(size);
	if (new == NULL)
		return (NULL);
	else
		ft_memset(new, 0, size);
	return (new);
}
