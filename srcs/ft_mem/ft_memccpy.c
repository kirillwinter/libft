/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wballaba <wballaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 18:53:16 by wballaba          #+#    #+#             */
/*   Updated: 2019/02/04 18:17:25 by wballaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*dstptr;
	unsigned char	*srcptr;

	i = 0;
	dstptr = (unsigned char*)dst;
	srcptr = (unsigned char*)src;
	while (i < n)
	{
		dstptr[i] = srcptr[i];
		if (srcptr[i] == (unsigned char)c)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}
