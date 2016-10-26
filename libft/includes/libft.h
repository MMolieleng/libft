/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoliele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 13:17:45 by mmoliele          #+#    #+#             */
/*   Updated: 2016/09/05 15:03:04 by mmoliele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdlib.h>
/*
typedef struct			s_list
{
	void				*data;
	void				*content;
	struct s_list		*next;
}						t_list;
*/

int	ft_strlen(const char *str);
char	*ft_strdup(const char *str);
char    *ft_strtrim(char const *s);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char    *ft_itoa(int n);
char	*ft_strnstr(const char *s1, const char *s2, size_t n);
char	**ft_strsplit(const char *str, char c);

int	ft_strcmp(const char *s1, const char *s2);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
void	ft_putstr(char *str);
void	ft_putchar(char c);
void    ft_putnbr(int n);
char	*ft_strstr(const char *s1, const char *s2);
void	*ft_memset(void *s, int c, size_t count);
int    	ft_memcmp(const void *st1, const void *st2, size_t n);
void   	*ft_memccpy(void *dest, const void *src, int x, size_t n);
void   	*ft_memchr(const void *str, int c, size_t n);
void   	*ft_memcpy(void *dest, const void *src, size_t n);
void   	*ft_memmove(void *dst, const void *src, size_t len);
void   	*ft_memset(void *s, int c, size_t count);
void	*ft_memalloc(size_t size);
void	ft_bzero(void *s, size_t n);
int		ft_isalpha(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_islower(int c);
int		ft_iswhitespace(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
int		ft_isupper(int c);
int 	ft_toupper(int c);
int		ft_tolower(int c);
int		ft_atoi(const char *str);
#endif
