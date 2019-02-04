/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wballaba <wballaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 23:05:47 by wballaba          #+#    #+#             */
/*   Updated: 2019/02/04 20:18:07 by wballaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Функция переводит число в строку
*/

static char	*ft_negativ(char *arr, long n, int len)
{
	int		i;

	arr[0] = '-';
	i = len - 1;
	while (i > 0)
	{
		arr[i] = n % 10 + '0';
		n /= 10;
		i--;
	}
	return (arr);
}

static char	*ft_positiv(char *arr, long n, int len)
{
	int		i;

	i = len - 1;
	while (i >= 0)
	{
		arr[i] = n % 10 + '0';
		n /= 10;
		i--;
	}
	return (arr);
}

char		*ft_itoa(int nb)
{
	int		len;
	char	*arr;
	int		sign;
	long	n;

	n = (long)nb;
	len = 0;
	sign = 1;
	if (n < 0)
	{
		sign = -1;
		n = -n;
		len++;
	}
	len = len + ft_intlen(n);
	arr = ft_strnew(len);
	if (arr == NULL)
		return (NULL);
	if (sign == -1)
		return (ft_negativ(arr, n, len));
	return (ft_positiv(arr, n, len));
}
