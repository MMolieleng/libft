/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoliele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/29 14:54:12 by mmoliele          #+#    #+#             */
/*   Updated: 2016/08/29 14:57:15 by mmoliele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static int	atoi_isspace(char c)
{
	if (c == ' '
		|| c == '\n'
		|| c == '\v'
		|| c == '\t'
		|| c == '\r'
		|| c == '\f'
		|| c == '+')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int	find_dash;
	int	find_nb;
	int	result;

	find_dash = 0;
	find_nb = 0;
	result = 0;
	while (atoi_isspace(*str) || ft_isdigit(*str) || *str == '-')
	{
		if (*str == '-' && (find_dash || find_nb))
			break ;
		if (*str == '-' && !find_dash)
			find_dash = 1;
		if (atoi_isspace(*str) && (find_nb || find_dash))
			break ;
		if (ft_isdigit(*str))
		{
			find_nb = 1;
			result = result * 10 + *str - '0';
		}
		str++;
	}
	if (find_dash)
		result *= -1;
	return (result);
}
