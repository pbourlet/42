/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbourlet <pbourlet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 17:36:06 by pbourlet          #+#    #+#             */
/*   Updated: 2016/11/07 13:01:24 by pbourlet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*frais;
	int     i;
	
	i = 0;
	frais = malloc(ft_strlen(s));
	while (s[i] != '\0')
	{
		frais[i] = f(i, s[i]);
		i++;
	}
	return (frais);
}
