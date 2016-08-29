/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoliele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/29 12:04:02 by mmoliele          #+#    #+#             */
/*   Updated: 2016/08/29 12:05:09 by mmoliele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_memcmp(const void *st1, const void *st2, size_t n)
{
	unsigned char	*s1;
	unsigned char	*s2;

	s1 = (unsigned char *)st1;
	s2 = (unsigned char *)st2;
	while (n)
	{
		if (*s1 == *s2)
		{
			s1++;
			s2++;
		}
		else
		{
			return (*s1 - *s2);
		}
		n--;
	}
	return (0);
}
