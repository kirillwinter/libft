/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wballaba <wballaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/15 17:04:59 by wballaba          #+#    #+#             */
/*   Updated: 2019/02/04 19:42:23 by wballaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** чтение из файла
*/

int		ft_read_file(char *filename)
{
	int fd;

	if ((fd = open(filename, O_RDONLY)) == -1)
	{
		ft_putstr("Error: could not open file \"");
		ft_putstr(filename);
		ft_putstr("\".\n");
	}
	return (fd);
}
