/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wballaba <wballaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 19:31:53 by wballaba          #+#    #+#             */
/*   Updated: 2019/02/04 19:19:54 by wballaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	size_t	i;
	int		endline;

	i = 0;
	endline = 0;
	while (i < n)
	{
		if (src[i] != '\0' && endline == 0)
			dst[i] = src[i];
		else
		{
			dst[i] = '\0';
			endline = 1;
		}
		i++;
	}
	return (dst);
}
