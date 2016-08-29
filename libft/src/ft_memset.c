/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoliele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 16:39:45 by mmoliele          #+#    #+#             */
/*   Updated: 2016/08/29 13:00:36 by mmoliele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	int		x;
	int		y;
	char	*str;
	
	x = -1;
	y = (int)len;
	str = b;
	while ((++x < y) && (str[x] = c))
		;
	return (b);
}
