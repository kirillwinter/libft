/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wballaba <wballaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/07 17:56:06 by wballaba          #+#    #+#             */
/*   Updated: 2019/02/04 19:58:35 by wballaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Применяет функцию f к каждому элементу списка
*/

static void	del(void *content, size_t content_size)
{
	if (content_size)
		content_size = 0;
	ft_memdel(content);
}

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *tmp;
	t_list *new;

	new = NULL;
	if (lst && f)
	{
		while (lst)
		{
			tmp = f(lst);
			if (!tmp)
			{
				ft_lstdel(&new, del);
				break ;
			}
			ft_lstpush(&new, tmp);
			lst = lst->next;
		}
	}
	return (new);
}
