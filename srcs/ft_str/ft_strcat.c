/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wballaba <wballaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 13:55:59 by wballaba          #+#    #+#             */
/*   Updated: 2019/02/04 20:38:04 by wballaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Объединение строк. Функция добавляет копию строки srcptr в конец строки
** destptr. Нулевой символ конца строки destptr заменяется первым символом
** строки srcptr, и новый нуль-символ добавляется в конец уже новой строки,
** сформированной объединением символов двух строк в строке destptr.
*/

char	*ft_strcat(char *destination, const char *append)
{
	int len;
	int i;

	i = 0;
	len = 0;
	while (destination[len] != '\0')
	{
		len++;
	}
	while (append[i] != '\0')
	{
		destination[len] = append[i];
		len++;
		i++;
	}
	destination[len] = '\0';
	return (destination);
}
