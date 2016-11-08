/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbourlet <pbourlet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 12:37:45 by pbourlet          #+#    #+#             */
/*   Updated: 2016/11/08 19:10:22 by pbourlet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int i;
	int test;

	i = 0;
	if (needle[i] == '\0')
		return ((char *)haystack);
	while (haystack[i] && needle[i])
	{
		if (haystack[i] != needle[i])
		{
			i = 0;
			haystack++;
			test = 0;
		}
		if (haystack[i] == needle[i])
		{
			test = 1;
			i++;
		}
	}
	if (test == 1)
		return ((char *)haystack);
	return (NULL);
}
