/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbourlet <pbourlet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 20:30:51 by pbourlet          #+#    #+#             */
/*   Updated: 2016/11/09 21:45:29 by pbourlet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*ss;

	i = 0;
	ss = (char *)s;
	while (i < n && i <= ft_strlen(s))
	{
		if (ss[i] == c)
			return (ss + i);
		i++;
	}
	return (NULL);
}
