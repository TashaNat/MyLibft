/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecalimac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/19 20:19:42 by ecalimac          #+#    #+#             */
/*   Updated: 2017/12/19 20:20:20 by ecalimac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list		*temp;

	while (*alst)
	{
		if (*alst != NULL)
			temp = (*alst)->next;
		ft_lstdelone(alst, del);
		*(alst) = temp;
	}
}
