/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbourlet <pbourlet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 17:42:53 by pbourlet          #+#    #+#             */
/*   Updated: 2016/11/07 12:54:23 by pbourlet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strequ(char const *s1, char const *s2)
{
	int i;
	int lex;

	i = 0;
	lex = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		lex = lex + (s1[i] - s2[i]);
		i++;
	}
	if (lex == 0)
		return (1);
	return (0);
}
