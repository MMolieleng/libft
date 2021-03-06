/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoliele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/25 14:12:22 by mmoliele          #+#    #+#             */
/*   Updated: 2016/07/26 12:53:12 by mmoliele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	d;
	unsigned char	*cs;

	d = (unsigned char)c;
	cs = (unsigned char*)s;
	while (n)
	{
		if (*cs == d)
			return ((void*)cs);
		n--;
		cs++;
	}
	return (NULL);
}
