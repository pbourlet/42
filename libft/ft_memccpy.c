/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbourlet <pbourlet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 18:06:15 by pbourlet          #+#    #+#             */
/*   Updated: 2016/11/07 13:26:20 by pbourlet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t	i;
	char	*d;
	char	*s;

	i = 0;
	d = (char *)dest;
	s = (char *)src;
	while (i < n && s[i] != '\0' && d[i] != '\0')
	{
		if (s[i] != c)
			d[i] = s[i];
		if (s[i] == c)
		{
			d[i] = s[i];
			return (d + (i + 1));
		}
		i++;
	}
	return (NULL);
}
