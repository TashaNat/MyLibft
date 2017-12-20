/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_setmem.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecalimac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/19 21:18:34 by ecalimac          #+#    #+#             */
/*   Updated: 2017/12/19 21:18:58 by ecalimac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_setmem(char *p, const char *str, char c)
{
	p = (char *)malloc(sizeof(char) * (ft_wordlen(str, c) + 1));
	if (p == NULL)
		return (NULL);
	ft_strncpy(p, str, ft_wordlen(str, c));
	p[ft_wordlen(str, c)] = '\0';
	return (p);
}
