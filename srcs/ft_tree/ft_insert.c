/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_insert.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wballaba <wballaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/28 15:41:31 by wballaba          #+#    #+#             */
/*   Updated: 2019/02/28 16:49:17 by wballaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_insert(int *tree, int *size, int val)
{
	int	pos;

	pos = ++(*size);
	tree[pos] = val;
	while (pos > 1)
	{
		if (tree[pos / 2] < tree[pos])
		{
			ft_swap(&tree[pos / 2], &tree[pos]);
			pos /= 2;
		}
		else
			break ;
	}
}
