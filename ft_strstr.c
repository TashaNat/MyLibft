/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecalimac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 20:13:22 by ecalimac          #+#    #+#             */
/*   Updated: 2017/12/15 18:54:29 by ecalimac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, const char *to_find)
{
	int		i;
	int		j;
	char	*fstr;

	fstr = (char *)str;
	i = 0;
	if (to_find[0] == '\0')
		return (fstr);
	while (fstr[i] != '\0')
	{
		j = 0;
		while (to_find[j] == fstr[i + j])
		{
			if (to_find[j + 1] == '\0')
				return ((fstr + i));
			j++;
		}
		i++;
	}
	return (NULL);
}
