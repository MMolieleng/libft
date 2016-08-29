/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoliele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/29 14:39:29 by mmoliele          #+#    #+#             */
/*   Updated: 2016/08/29 15:21:32 by mmoliele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memalloc(size_t size)
{
	void	*ptr;

	if ((ptr = (void *)malloc(size)))
	{
		ft_memset(ptr, 0, size);
		return (ptr);
	}
	return (0);
}
