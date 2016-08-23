/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoliele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 16:39:45 by mmoliele          #+#    #+#             */
/*   Updated: 2016/08/23 16:45:28 by mmoliele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_memset(void *s, int c, size_t count)
{
	char	*str;

	str = s;
	while (count)
	{
		*str++ = c;
		count--;
	}
	return (s);
}
