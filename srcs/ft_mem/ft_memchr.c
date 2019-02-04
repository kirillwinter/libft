/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wballaba <wballaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 14:40:49 by wballaba          #+#    #+#             */
/*   Updated: 2019/02/04 20:05:42 by wballaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Находит знак в памяти
*/

void	*ft_memchr(const void *arr, int c, size_t n)
{
	size_t			i;
	unsigned char	*arrptr;

	arrptr = (unsigned char*)arr;
	i = 0;
	while (i < n)
	{
		if (arrptr[i] == (unsigned char)c)
		{
			return ((void*)arr);
		}
		i++;
		arr++;
	}
	return (NULL);
}
