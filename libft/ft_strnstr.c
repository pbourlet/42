/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbourlet <pbourlet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 12:37:18 by pbourlet          #+#    #+#             */
/*   Updated: 2016/11/14 20:18:04 by pbourlet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	l;
	char	*buf;

	l = ft_strlen(to_find);
	buf = ft_strdup((char *)str);
	if (to_find == '\0')
		return ((char *)str);
	while (buf != 0 && to_find != '\0' && len >= l)
	{
		if (ft_memcmp(buf, to_find, l) == 0)
			return ((char *)buf);
		buf++;
		len--;
	}
	return (NULL);
}
