/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbourlet <pbourlet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 13:06:26 by pbourlet          #+#    #+#             */
/*   Updated: 2016/11/14 22:26:29 by pbourlet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*deb;
	t_list	*frais;
	t_list	*nxtlst;

	if (!lst)
		return (NULL);
	deb = f(ft_lstnew(lst, lst->content_size));
	frais = deb;
	nxtlst = deb;
	lst = lst->next;
	while (lst)
	{
		frais = f(ft_lstnew(lst, lst->content_size));
		nxtlst->next = frais;
		nxtlst = frais;
		lst = lst->next;
	}
	return (deb);
}
