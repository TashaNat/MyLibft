/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecalimac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/14 21:03:22 by ecalimac          #+#    #+#             */
/*   Updated: 2017/12/15 16:53:52 by ecalimac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void		*p;

	if (size == 0)
		return (NULL);
	if ((p = malloc(size)) == NULL)
		return (NULL);
	ft_memset(p, 0, size);
	return (p);
}
