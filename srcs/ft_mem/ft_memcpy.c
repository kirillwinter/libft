/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wballaba <wballaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 18:23:47 by wballaba          #+#    #+#             */
/*   Updated: 2019/02/04 20:06:35 by wballaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** копирует области памяти
*/

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*dstptr;
	const char	*srcptr;

	if (dst != src)
	{
		i = 0;
		dstptr = dst;
		srcptr = src;
		while (i < n)
		{
			dstptr[i] = srcptr[i];
			i++;
		}
	}
	return (dst);
}
