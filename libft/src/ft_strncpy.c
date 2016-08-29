/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoliele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/29 12:02:09 by mmoliele          #+#    #+#             */
/*   Updated: 2016/08/29 12:02:11 by mmoliele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	char	*d;

	d = dst;
	while (n)
	{
		if ((*d = *src) != 0)
			src++;
		d++;
		n--;
	}
	return (dst);
}
