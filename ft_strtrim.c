/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecalimac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/15 15:29:51 by ecalimac          #+#    #+#             */
/*   Updated: 2017/12/15 17:59:41 by ecalimac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i[3];
	char	*cpy;

	if (!s)
		return (NULL);
	i[0] = 0;
	i[2] = 0;
	i[1] = ft_strlen(s);
	while (s[i[1] - 1] == ' ' || s[i[1] - 1] == '\n' || s[i[1] - 1] == '\t')
		i[1]--;
	while (s[i[0]] == ' ' || s[i[0]] == '\n' || s[i[0]] == '\t')
	{
		i[0]++;
		i[1]--;
	}
	if (i[1] < 0)
		i[1] = 0;
	i[2] = 0;
	cpy = (char *)malloc(sizeof(char) * (i[1] + 1));
	if (cpy == NULL)
		return (NULL);
	while (i[2] < i[1])
		cpy[i[2]++] = s[i[0]++];
	cpy[i[2]] = '\0';
	return (cpy);
}
