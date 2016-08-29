/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoliele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/29 12:09:25 by mmoliele          #+#    #+#             */
/*   Updated: 2016/08/29 12:11:22 by mmoliele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	char	*tmp;
	int		stop;

	tmp = s1;
	stop = 0;
	if (n)
	{
		while (*s1)
			s1++;
		while ((n-- > 0) && *s2 != '\0')
		{
			*s1++ = *s2++;
		}
		*s1++ = '\0';
	}
	return (tmp);
}
