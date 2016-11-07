/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbourlet <pbourlet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 13:06:21 by pbourlet          #+#    #+#             */
/*   Updated: 2016/11/07 14:16:20 by pbourlet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*frais;
	int		i;

	i = 0;
	frais = malloc(ft_strlen(s));
	while (s[i] != '\0')
	{
		frais[i] = f(s[i]);
		i++;
	}
	return (frais);
}
