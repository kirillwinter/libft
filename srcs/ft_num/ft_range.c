/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wballaba <wballaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 16:38:20 by wballaba          #+#    #+#             */
/*   Updated: 2019/02/04 20:19:33 by wballaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Функция заполняет массив от min до max интами
*/

int	*ft_range(int min, int max)
{
	int i;
	int *arr;

	i = 0;
	if (min >= max)
		return (0);
	arr = (int*)malloc(sizeof(*arr) * (max - min + 1));
	if (arr == NULL)
		return (NULL);
	while (min < max)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (arr);
}
