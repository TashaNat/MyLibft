/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordcount.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecalimac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/19 21:14:00 by ecalimac          #+#    #+#             */
/*   Updated: 2017/12/19 21:21:58 by ecalimac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_wordcount(const char *str, char c)
{
	int		i;
	int		schimba;
	int		len;

	i = 0;
	len = 0;
	schimba = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c && schimba == 0)
		{
			len++;
			schimba = 1;
		}
		if (str[i] == c)
			schimba = 0;
		i++;
	}
	return (len);
}
