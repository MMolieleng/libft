/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoliele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 16:39:45 by mmoliele          #+#    #+#             */
/*   Updated: 2016/08/23 18:20:08 by mmoliele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_memset(void *s, int c, size_t count)
{
	char	*str;

	str = s;
	while (count > 0)
	{
		str[count] = c;
		count--;
	}
	return (s);
}
