/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbourlet <pbourlet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 20:32:10 by pbourlet          #+#    #+#             */
/*   Updated: 2016/11/06 22:18:25 by pbourlet         ###   ########.fr       */
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

char	*ft_strtrim(char const *s)
{
	char	*cpy;
	int	i;
	int	y;

	i = 0;
	y = 0;
	cpy = malloc(ft_strlen((char *)s));
	while (s[y] != '\0')
	{
		if (!(s[y] == ' ' || s[y] == '\n' || s[y] == '\t'))
		{
			cpy[i] = s[y];
			i++;
		}
		y++;
	}
	return (cpy);
}
