/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoliele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 13:17:45 by mmoliele          #+#    #+#             */
/*   Updated: 2016/08/23 17:38:35 by mmoliele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>

/*
typedef struct			s_list
{
	void				*data;
	void				*content;
	struct s_list		*next;
}						t_list;
*/

int		ft_strlen(char *str);
char	*ft_strdup(char *str);
void	ft_putstr(char *str);
void	ft_putchar(char c);
char    *ft_memset(void *s, int c, size_t count);
void    ft_bzero(char *s, size_t n);
#endif
