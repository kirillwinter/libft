/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wballaba <wballaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/07 14:45:59 by wballaba          #+#    #+#             */
/*   Updated: 2019/02/04 21:37:54 by wballaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Принимает в качестве параметра адрес указателя на ссылку и освобождает
** память этой ссылки и всех наследников этой ссылки
*/

void		ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *tmp;
	t_list *list;

	list = *alst;
	if (alst != NULL && del != NULL)
	{
		while (list != NULL)
		{
			tmp = list->next;
			del(list->content, list->content_size);
			free(list);
			list = tmp;
		}
	}
	*alst = NULL;
}
