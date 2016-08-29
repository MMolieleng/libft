/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoliele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/29 12:02:57 by mmoliele          #+#    #+#             */
/*   Updated: 2016/08/29 15:56:22 by mmoliele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

size_t	ft_strlcat(char *dst, const char *sr, size_t size)
{
	size_t	dsize;
	size_t	len;
	size_t	res;
	char	*src;

	src = (char *)sr;
	dsize = ft_strlen(dst);
	len = ft_strlen(src);
	res = dsize + len;
	dst += dsize;
	size -= dsize;
	if (len > size)
		len = size - 1;
	ft_memcpy(dst, src, len);
	dst[len] = 0;
	return (res);
}
