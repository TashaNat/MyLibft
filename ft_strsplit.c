/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecalimac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/16 20:58:14 by ecalimac          #+#    #+#             */
/*   Updated: 2017/12/19 21:24:16 by ecalimac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		**ft_strsplit(const char *str, char c)
{
	char		**index;
	int			words;
	int			j;

	if (str == NULL)
		return (NULL);
	j = 0;
	words = ft_wordcount(str, c);
	if (!(index = (char **)malloc(sizeof(char *) * (words + 1))))
		return (NULL);
	while (*str != '\0')
	{
		while (*str == c)
			str++;
		if (*str != '\0')
		{
			index[j] = ft_setmem(index[j], str, c);
			str = str + ft_wordlen(str, c);
			j++;
		}
		if (*str != '\0')
			str++;
	}
	index[j] = NULL;
	return (index);
}
