/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecalimac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 13:38:09 by ecalimac          #+#    #+#             */
/*   Updated: 2017/12/19 20:06:11 by ecalimac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int			sign;
	long long	nr;

	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	sign = 1;
	nr = 0;
	if (*str == '-' || *str == '+')
		if (*str++ == '-')
			sign = -1;
	while ('0' <= *str && *str <= '9')
	{
		if (nr > 922337203685477580 && sign == 1)
			return (-1);
		if (nr > 922337203685477580 && sign == -1)
			return (0);
		nr = nr * 10 + sign * (*str++ - '0');
		if (sign == 1 && nr < 0)
			return (-1);
		if (sign == -1 && nr > 0)
			return (0);
	}
	return (nr);
}
