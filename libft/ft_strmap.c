/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbourlet <pbourlet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 13:06:21 by pbourlet          #+#    #+#             */
/*   Updated: 2016/11/06 22:16:18 by pbourlet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int i;
	
	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*frais;
	int	i;

	i = 0;
	frais = malloc(ft_strlen(s));
	while (s[i] != '\0')
	{
		frais[i] = f(s[i]);
		i++;
	}
	return (frais);
}
