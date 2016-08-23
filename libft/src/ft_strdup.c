/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoliele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 14:11:04 by mmoliele          #+#    #+#             */
/*   Updated: 2016/08/23 15:25:22 by mmoliele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(char *str)
{
	int		i;
	int		l;
	char	*dup;

	i = 0;
	l = ft_strlen(str);
	dup = (char*)malloc((sizeof(char) * i) + 1);
	while (*str && str)
	{
		*dup = *str;
		dup++;
		str++;
	}
	*dup = '\0';
	return (dup);
}
