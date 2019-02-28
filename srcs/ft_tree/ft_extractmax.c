/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_extractmax.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wballaba <wballaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/28 15:22:09 by wballaba          #+#    #+#             */
/*   Updated: 2019/02/28 18:18:38 by wballaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	swap_child(int *tree, int pos, int size)
{
	if ((tree[2 * pos + 1] > tree[2 * pos]) && ((2 * pos + 1) < size))
	{
		ft_swap(&tree[pos], &tree[2 * pos + 1]);
		pos = 2 * pos + 1;
	}
	else
	{
		ft_swap(&tree[pos], &tree[2 * pos]);
		pos = 2 * pos;
	}
	return (pos);
}

int	ft_extractmax(int *tree, int *size)
{
	int ret;
	int pos;

	ret = tree[1];
	ft_swap(&tree[1], &tree[*size]);
	(*size)--;
	pos = 1;
	while (pos < *size)
	{
		if ((2 * pos) == *size)
		{
			if (tree[pos] < tree[2 * pos])
				ft_swap(&tree[pos], &tree[2 * pos]);
			break ;
		}
		else if (tree[pos] < MAX(tree[2 * pos], tree[2 * pos + 1]))
			pos = swap_child(tree, pos, *size);
	}
	return (ret);
}
