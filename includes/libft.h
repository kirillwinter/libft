/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wballaba <wballaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 19:08:46 by jwillem-          #+#    #+#             */
/*   Updated: 2019/03/02 15:34:25 by wballaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

# define BUFF_SIZE 16
# define MAX_FD 4096

# define ABS(n)	(n < 0 ? -n : n)
# define MAX(a, b)	(a > b ? a : b)
# define MIN(a, b)	(a < b ? a : b)

typedef struct	s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}				t_list;

typedef struct	s_pqueue_node
{
	int			priority;
	void		*content;
}				t_pqueue_node;

typedef struct	s_pqueue
{
	t_pqueue_node	*nodes;
	size_t			length;
	size_t			size;
}				t_pqueue;

/*
** ft_file
*/
void			ft_close_file(int fd);
int				ft_read_file(char *filename);
int				get_next_line(const int fd, char **line);
/*
** ft_lst
*/
void			ft_lstadd(t_list **alst, t_list *new);
void			ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void			ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void			ft_lstiter(t_list *lst, void (*f)(t_list *elem));
size_t			ft_lstlen(t_list *alst);
t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
t_list			*ft_lstnew(void const *content, size_t content_size);
void			ft_lstpush(t_list **alst, t_list *new);
/*
** ft_mem
*/
void			ft_bzero(void *s, size_t n);
void			*ft_memalloc(size_t size);
void			*ft_memccpy(void *dst, const void *src, int c, size_t n);
void			*ft_memchr(const void *arr, int c, size_t n);
int				ft_memcmp(const void *arr1, const void *arr2, size_t n);
void			*ft_memcpy(void *dst, const void *src, size_t n);
void			ft_memdel(void **ap);
void			*ft_memmove(void *dst, const void *src, size_t n);
void			*ft_memset(void *b, int c, size_t len);
/*
** ft_num
*/
int				ft_atoi(const char *str);
int				ft_intlen(long n);
int				ft_intmaxabs(int *arr, size_t size);
char			*ft_itoa_base(long long num, int base);
char			*ft_itoa(int nb);
double			ft_power(double num, int power);
int				*ft_range(int min, int max);
int				ft_sqrt(int nb);
void			ft_swap_ptr(void **a, void **b);
void			ft_swap(int *a, int *b);
char			*ft_uitoa_base(unsigned long long num, int base);
/*
** ft_printf
*/
int				ft_printf(const char *format, ...);
/*
** ft_str
*/
int				ft_isalnum(int c);
int				ft_isalpha(int c);
int				ft_isascii(int c);
int				ft_isdigit(int c);
int				ft_isprint(int c);
void			ft_putchar_fd(char c, int fd);
void			ft_putchar(char c);
void			ft_putendl_fd(char const *s, int fd);
void			ft_putendl(char const *s);
void			ft_putnbr_fd(int n, int fd);
void			ft_putnbr(int n);
void			ft_putstr_fd(char const *s, int fd);
void			ft_putstr(char const *s);
void			ft_putstrc(char const *s, unsigned int c);
char			*ft_strcat(char *destination, const char *append);
char			*ft_strchr(const char *str, int c);
void			ft_strclr(char *s);
int				ft_strcmp(const char *s1, const char *s2);
size_t			ft_strcount(const char **s);
char			*ft_strcpy(char *destination, const char *source);
void			ft_strdel(char **as);
char			*ft_strdup(const char *s1);
int				ft_strequ(char const *s1, char const *s2);
void			ft_striter(char *s, void (*f)(char *));
void			ft_striteri(char *s, void (*f)(unsigned int, char *));
char			*ft_strjoin_free(char *s1, char *s2, int operation);
char			*ft_strjoin(char const *s1, char const *s2);
size_t			ft_strlcat(char *dst, const char *app, size_t size);
size_t			ft_strlen(const char *s);
char			*ft_strmap(char const *s, char (*f)(char));
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char			*ft_strncat(char *s1, const char *s2, size_t n);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
char			*ft_strncpy(char *dst, const char *src, size_t n);
int				ft_strnequ(char const *s1, char const *s2, size_t n);
char			*ft_strnew(size_t size);
char			*ft_strnstr(const char *str1, const char *str2, size_t n);
char			*ft_strpbrk(const char *s, const char *accept);
char			*ft_strrchr(const char *str, int c);
char			**ft_strsplit(char const *s, char c);
char			*ft_strstr(const char *haystack, const char *needle);
char			*ft_strsub(char const *s, unsigned int start, size_t len);
char			*ft_str_toupper(char *str);
char			*ft_strtrim(char const *s);
int				ft_tolower(int c);
int				ft_toupper(int c);

/*
** ft_tree
*/
int				pq_compare_priority(t_pqueue *pqueue, size_t a, size_t b);
int				pq_priority(t_pqueue *pqueue, size_t pos);
void			pq_ascent(t_pqueue	*pqueue, size_t pos);
void			pq_drowning(t_pqueue *pqueue, size_t pos);
void			*pq_extractmax(t_pqueue	*pqueue);
int				pq_insert(t_pqueue	*pqueue, void *content, int priority);
t_pqueue		*pq_init(size_t length);
int				pq_swap_node(t_pqueue *pqueue, size_t a, size_t b);

#endif
