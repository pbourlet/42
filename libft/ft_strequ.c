/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbourlet <pbourlet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 17:42:53 by pbourlet          #+#    #+#             */
/*   Updated: 2016/11/09 22:55:52 by pbourlet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strequ(char const *s1, char const *s2)
{
	int i;
	int lex;

	i = 0;
	lex = 0;
	if (!s1 || !s2)
		return (0);
	lex = lex + ft_strcmp(s1, s2);
	if (lex == 0)
		return (1);
	return (0);
}
