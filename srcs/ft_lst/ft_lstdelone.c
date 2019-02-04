/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wballaba <wballaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/07 13:32:46 by wballaba          #+#    #+#             */
/*   Updated: 2019/02/04 19:55:21 by wballaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Принимает в качестве параметра адрес указателя ссылки и освобождает
** память содержимого ссылки
*/

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*lst;

	lst = *alst;
	if (alst != NULL && del != NULL)
	{
		del(lst->content, lst->content_size);
		free(*alst);
		*alst = NULL;
	}
}
