/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecalimac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 20:45:32 by ecalimac          #+#    #+#             */
/*   Updated: 2017/12/16 19:37:41 by ecalimac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	t;

	i = 0;
	j = 0;
	if (*s2 == '\0')
		return ((char*)s1);
	while (s1[i] && i < n)
	{
		t = i;
		while (s1[t] == s2[j] && s1[t] && s2[j])
		{
			t++;
			j++;
		}
		if (s2[j] == '\0' && t <= n)
			return ((char *)s1 + i);
		else
			j = 0;
		i++;
	}
	return (NULL);
}
