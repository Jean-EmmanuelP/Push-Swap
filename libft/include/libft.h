/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperrama <jperrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 12:52:24 by rmechety          #+#    #+#             */
/*   Updated: 2022/11/11 11:57:15 by jperrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <stddef.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

void	ft_striteri(char *s, void (*f)(unsigned int, char *));
t_list	*ft_lstlast(t_list *lst);
char	*ft_strnstr(const char *s1, const char *s2, size_t n);
size_t	ft_strlcat(char *dest, const char *src, size_t n);
void	ft_printhexa(unsigned int x, const char *format);
void	ft_putnbr(int nb);
int		ft_atoi(const char *str);
char	*ft_strtrim(const char *s1, const char *set);
size_t	ft_strlcpy(char *dest, const char *src, size_t n);
char	*ft_strchr(const char *foin, int aiguille);
int		is_digit(char c);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_putstr_fd(char *s, int fd);
char	*strnstr(const char *s1, const char *s2, size_t n);
t_list	*ft_lstnew(void *content);
void	*ft_calloc(size_t nmemb, size_t size);
char	*ft_strdup(const char *s);
char	*ft_strjoin(char const *s1, char const *s2);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
t_list	*ft_lstlast(t_list *lst);
int		ft_strlen(const char *c);
int		ft_isdigit(int c);
int		ft_isascii(int c);
int		ft_isprint(char c);
void	ft_putendl_fd(char *s, int fd);
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
int		ft_lstsize(t_list *lst);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	**ft_split(char const *s, char c);
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_isalpha(char c);
int		ft_isalnum(char c);
char	*ft_strrchr(const char *foin, int aiguille);
void	ft_putchar_fd(char c, int fd);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_lstiter(t_list *lst, void (*f)(void *));
void	ft_bzero(void *s, size_t n);
void	*ft_memset(void *ptr, int i, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memchr(const void *s, int c, size_t n);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	ft_toupper(char c);
char	ft_tolower(char c);
void	ft_lstdelone(t_list *lst, void (*del)(void *));
t_list	*ft_lstnew(void *content);
char	*ft_itoa(int n);
void	ft_lstclear(t_list **lst, void (*del)(void *));
int		is_alnum(char c);
void	ft_putnbr_fd(int n, int fd);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);

#endif
