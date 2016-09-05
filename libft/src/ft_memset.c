/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoliele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 16:39:45 by mmoliele          #+#    #+#             */
/*   Updated: 2016/09/05 13:39:36 by mmoliele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memset(void *s, int c, size_t len)
{
	size_t			l;
	unsigned char	*p;
	
	l = 0;
	p = (unsigned char*)s;
	while (l < len)
	{
		p[l] = (char)(c);
		l++;
	}
	return (s);
}
