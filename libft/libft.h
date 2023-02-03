/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wricky-t <wricky-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 16:58:22 by wricky-t          #+#    #+#             */
/*   Updated: 2023/02/03 15:34:54 by wricky-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

// Mandatory functions
int		ft_isdigit(int ch);
int		ft_isalpha(int ch);
int		ft_isalnum(int ch);
int		ft_isascii(int ch);
int		ft_isprint(int ch);
int		ft_isspace(char ch);
size_t	ft_strlen(const char *str);
void	*ft_memset(void *ptr, int value, size_t num);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t num);
void	*ft_memmove(void *dst, const void *src, size_t len);
char	*ft_strcpy(char *dest, char *src);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
int		ft_toupper(int ch);
int		ft_tolower(int ch);
char	*ft_strlower(char *str);
char	*ft_strupper(char *str);
char	*ft_strcat(char *dest, char *src);

char	*ft_strchr(const char *str, int ch);
char	*ft_strrchr(const char *str, int ch);
int		ft_strcmp(char *str1, char *str2);
int		ft_strncmp(const char *str1, const char *str2, size_t num);
void	*ft_memchr(const void *ptr, int value, size_t num);
int		ft_memcmp(const void *ptr1, const void *ptr2, size_t num);
char	*ft_strnstr(const char *big, const char *little, size_t len);
int		ft_atoi(const char *str);
void	*ft_calloc(size_t num, size_t size);
char	*ft_strdup(const char *s1);
char	*ft_strndup(char *str, int n);
size_t	ft_strspn(const char *str, const char *accept);
size_t	ft_strcspn(const char *str1, const char *str2);
char	*ft_strtok(char *str, const char *delim);
void	ft_freestrarr(char **arr);
size_t	ft_strarrsize(char **arr);

// Additional functions
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strjoin_free(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
char	**ft_split_ws(char *str);
char	**ft_split_delims(char *str, char *delimeters);
char	*ft_itoa(int n);
char	*ft_itoa_unsigned(unsigned long n, int base, char *radix);
char	*ft_itoa_base(long n, int base, char *radix);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

// Bonus functions
t_list	*ft_lstnew(void *content);
t_list	*ft_lstlast(t_list *lst);
int		ft_lstsize(t_list *lst);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
t_list	*ft_lstgetlast(t_list *node);
t_list	*ft_lstcopy(t_list *lst, void *(*copy)(void *));
void	*ft_lstcopynode(void *content);
void	ft_lstbubblesort(t_list **lst, int (*sort)(void *, void *));
void	ft_lstswapcontent(t_list *ptr1, t_list *ptr2);

#endif
