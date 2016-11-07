/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbourlet <pbourlet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 20:32:10 by pbourlet          #+#    #+#             */
/*   Updated: 2016/11/07 14:20:09 by pbourlet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*cpy;
	int		i;
	int		y;

	i = 0;
	y = 0;
	cpy = malloc(ft_strlen(s));
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
