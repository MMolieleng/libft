/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoliele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/29 12:06:07 by mmoliele          #+#    #+#             */
/*   Updated: 2016/08/29 12:07:24 by mmoliele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void *ft_memmove(void *s1, const void *s2, size_t n)
{
	char	buffer[(long)n];

	ft_memcpy(buffer, s2, n);
	ft_memcpy(s1, buffer, n);
	return (s1);
}
