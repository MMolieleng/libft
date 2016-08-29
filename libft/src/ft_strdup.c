/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoliele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 14:11:04 by mmoliele          #+#    #+#             */
/*   Updated: 2016/08/29 13:14:27 by mmoliele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(const char *str)
{
	int		i;
	int		l;
	char	*dup;

	i = 0;
	l = ft_strlen((char *)str);
	dup = (char*)malloc((sizeof(char) * l) + 1);
	if (!dup)
		return (NULL);
	dup[l] = '\0';
	while (*str && str)
	{
		dup[i] = *str;
		i++;
		str++;
	}
	return (dup);
}
