/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wballaba <wballaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 19:30:23 by wballaba          #+#    #+#             */
/*   Updated: 2019/02/04 20:06:59 by wballaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** перемещает одну область памяти в другую, даже если они пересекаются
*/

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dstptr;
	unsigned char	*srcptr;

	if (dst != src)
	{
		i = n;
		dstptr = (unsigned char *)dst;
		srcptr = (unsigned char *)src;
		if (srcptr < dstptr)
		{
			while (i-- > 0)
				dstptr[i] = srcptr[i];
		}
		else
			ft_memcpy(dst, src, n);
	}
	return (dst);
}
