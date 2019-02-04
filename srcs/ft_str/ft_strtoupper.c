/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtoupper.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wballaba <wballaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 20:14:25 by jwillem-          #+#    #+#             */
/*   Updated: 2019/02/04 21:35:27 by wballaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Функция из строки буквы нижнего регистра делает буквами верхнего регистра.
*/

char	*ft_str_toupper(char *str)
{
	char	*start_res;

	if (str == NULL)
		return (NULL);
	start_res = str;
	while (*str)
	{
		if (*str >= 97 && *str <= 122)
			*str = *str - 32;
		str++;
	}
	return (start_res);
}
