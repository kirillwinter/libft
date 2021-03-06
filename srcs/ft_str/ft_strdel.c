/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wballaba <wballaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 17:23:42 by jwillem-          #+#    #+#             */
/*   Updated: 2019/02/04 20:47:48 by wballaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Функция очищает строку
*/

void	ft_strdel(char **as)
{
	if (as != NULL)
	{
		if (*as != NULL)
			free(*as);
		*as = NULL;
	}
}
