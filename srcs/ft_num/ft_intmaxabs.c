/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intmaxabs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wballaba <wballaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 17:30:17 by wballaba          #+#    #+#             */
/*   Updated: 2019/02/19 15:12:49 by wballaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Функция возвращает максимальный элемент массива
*/

int	ft_intmaxabs(int *arr, size_t size)
{
	size_t	i;
	int		max;

	i = 0;
	max = ABS(arr[i]);
	while (i < size)
	{
		if (max < ABS(arr[i]))
			max = ABS(arr[i]);
		i++;
	}
	return (max);
}
