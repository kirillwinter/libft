/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wballaba <wballaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/10 14:11:38 by wballaba          #+#    #+#             */
/*   Updated: 2019/02/15 13:08:50 by wballaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** построчное чтение из файла с записью в line
*/

int	backslash_n_search(char **stack, char **line)
{
	char	*tmp;
	char	*backslash_n_ptr;

	if (*stack)
	{
		backslash_n_ptr = *stack;
		if ((backslash_n_ptr = ft_strchr(*stack, '\n')))
		{
			*backslash_n_ptr = '\0';
			if (!(*line = ft_strdup(*stack)))
				return (-1);
			if (!(tmp = ft_strdup(backslash_n_ptr + 1)))
				return (-1);
			free(*stack);
			*stack = tmp;
			return (1);
		}
	}
	return (0);
}

int	read_file(const int fd, char **buf, char **line, char **stack)
{
	ssize_t	ret;
	char	*tmp;
	int		res;

	res = 0;
	while ((ret = read(fd, *buf, BUFF_SIZE)) > 0)
	{
		(*buf)[ret] = '\0';
		if (*stack)
		{
			if (!(tmp = ft_strjoin(*stack, *buf)))
				return (-1);
			free(*stack);
			*stack = tmp;
		}
		else if (!(*stack = ft_strdup(*buf)))
			return (-1);
		if ((res = backslash_n_search(stack, line)))
			break ;
	}
	if (ret == -1)
		return (-1);
	if (res == 0 && ret < BUFF_SIZE)
		return (0);
	return (1);
}

int	get_next_line(const int fd, char **line)
{
	int			res;
	char		*buf;
	static char	*stack[MAX_FD + 1];

	if (!(line) || (fd >= MAX_FD || fd < 0))
		return (-1);
	res = 0;
	if ((res = backslash_n_search(&stack[fd], line)) == 0)
	{
		if (!(buf = (char *)malloc(sizeof(char) * (BUFF_SIZE + 1))))
			return (-1);
		res = read_file(fd, &buf, line, &stack[fd]);
		ft_strdel(&buf);
	}
	if (res == 0)
	{
		if (stack[fd] && stack[fd][0])
		{
			*line = ft_strdup(stack[fd]);
			ft_strdel(&stack[fd]);
			res = 1;
		}
	}
	return (res);
}
