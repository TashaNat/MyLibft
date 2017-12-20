/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecalimac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 20:08:38 by ecalimac          #+#    #+#             */
/*   Updated: 2017/12/12 20:09:12 by ecalimac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*temp_s;

	temp_s = s;
	temp_s = temp_s + ft_strlen(s);
	while (*temp_s != (char)c && temp_s != s)
		temp_s--;
	if (*temp_s == (char)c)
		return ((char *)temp_s);
	return (NULL);
}
