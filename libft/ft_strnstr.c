/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbourlet <pbourlet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 12:37:18 by pbourlet          #+#    #+#             */
/*   Updated: 2016/11/08 19:10:56 by pbourlet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	l;
	int		test;
	int		i;

	i = 0;
	l = 0;
	if (to_find[i] == '\0')
		return ((char *)str);
	while (str[i] && to_find[i])
	{
		if (str[i] != to_find[i] && !(test = 0))
		{
			i = 0;
			str++;
		}
		if (str[i] == to_find[i] && to_find[i] && (test = 1))
			i++;
		l++;
	}
	if (l > len)
		test = 0;
	if (test == 1 || to_find[0] == '\0')
		return ((char *)str);
	return (NULL);
}
