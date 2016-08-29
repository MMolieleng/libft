/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoliele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/29 12:02:44 by mmoliele          #+#    #+#             */
/*   Updated: 2016/08/29 12:02:47 by mmoliele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memccpy(void *dest, const void *src, int x, size_t n)
{
	char		c;
	const char	*s1;
	char		*s2;
	size_t		i;

	i = n;
	c = (char)x;
	s1 = (const char *)src;
	s2 = (char *)dest;
	while (n-- > 0)
	{
		if ((*s2++ = *s1++) == c)
			return (s2);
	}
	return (0);
}
