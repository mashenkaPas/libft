/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpas <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/21 23:45:38 by mpas              #+#    #+#             */
/*   Updated: 2018/09/21 23:49:27 by mpas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int long	res;
	int			neg;
	const char	*s;

	s = str;
	while (*s && (*s == ' ' || *s == '\t' || *s == '\n'
				|| *s == '\v' || *s == '\f' || *s == '\r'))
		s++;
	neg = 1;
	if (*s == '+' || *s == '-')
		if (*s++ == '-')
			neg = -1;
	res = 0;
	while (*s >= '0' && *s <= '9')
	{
		res = res * 10 + neg * (*s++ - 48);
	}
	return ((int)res);
}
