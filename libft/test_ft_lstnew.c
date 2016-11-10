/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_lstnew.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbourlet <pbourlet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 16:43:23 by pbourlet          #+#    #+#             */
/*   Updated: 2016/11/10 17:21:32 by pbourlet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdisp(t_list *a)
{
	if (a)
	{
		ft_putendl("\t------------");
		ft_putendl(a->content);
		ft_putnbr(a->content_size);
		ft_putchar('\n');
		ft_lstdisp(a->next);
	}
}

int	main(void)
{
	char	tab1[30] = "salut";
	char	tab2[30] = "petite";
	char	tab3[30] = "merde";
	
	ft_lstdisp(ft_lstnew(tab1, ft_strlen(tab1)));
	ft_lstdisp(ft_lstnew(tab2, ft_strlen(tab2)));
	ft_lstdisp(ft_lstnew(tab3, ft_strlen(tab3)));
	return (0);
}
