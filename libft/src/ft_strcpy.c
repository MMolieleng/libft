/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoliele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/29 12:12:09 by mmoliele          #+#    #+#             */
/*   Updated: 2016/08/29 12:12:14 by mmoliele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strcpy(char *d, const char *s)
{
	char	*dest;
	char	*src;

	dest = d;
	src = (char *)s;
	while (*src && src)
	{
		*dest++ = *src++;
	}
	*dest = *src;
	return (d);
}
