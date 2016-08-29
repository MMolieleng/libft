/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstrim.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoliele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/29 14:36:10 by mmoliele          #+#    #+#             */
/*   Updated: 2016/08/29 14:37:08 by mmoliele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strtrim(char const *s)
{
	int		w;
	int		x;
	int		y;
	char	*t;

	x = 0;
	w = -1;
	y = 0;
	y = ft_strlen(s);
	t = (char *)ft_memalloc(ft_strlen(s));
	while (s[x] && (s[x] == ' ' || s[x] == '\t' || s[x] == '\n'))
		x++;
	while (s[y - 1] == ' ' || s[y - 1] == '\t' || s[y - 1] == '\n')
		t[y--] = '\0';
	while (s[++x - 1] && x - 1 <= y)
		t[++w] = s[x - 1];
	return (t);
}
