/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecalimac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/16 20:08:20 by ecalimac          #+#    #+#             */
/*   Updated: 2017/12/16 20:56:43 by ecalimac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_charnum(int n)
{
	int		i;

	i = 0;
	if (n <= 0)
	{
		i++;
		n = n * -1;
	}
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char		*ft_itoa(int n)
{
	int			i;
	char		*len;

	i = ft_charnum(n);
	len = (char *)malloc(sizeof(char) * (i + 1));
	if (len == NULL)
		return (NULL);
	if (n == -2147483648)
		return (ft_strcpy(len, "-2147483648"));
	if (n < 0)
	{
		len[0] = '-';
		n = n * -1;
	}
	if (n == 0)
		return (ft_strcpy(len, "0"));
	len[i] = '\0';
	while (n > 0)
	{
		len[i - 1] = n % 10 + '0';
		n = n / 10;
		i--;
	}
	return (len);
}
