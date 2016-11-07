/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbourlet <pbourlet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 20:26:18 by pbourlet          #+#    #+#             */
/*   Updated: 2016/11/07 12:21:13 by pbourlet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int		*d;
	int		*s;
	size_t	i;

	i = 0;
	d = (int *)dest;
	s = (int *)src;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
