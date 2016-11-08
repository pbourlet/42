/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbourlet <pbourlet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 20:26:18 by pbourlet          #+#    #+#             */
/*   Updated: 2016/11/08 23:37:16 by pbourlet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*d;
	char	*s;
	size_t	len;

	i = 0;
	l = n -1;
	d = (char *)dest;
	s = (char *)src;
	if (d > s)
		len = n - 1;
	while (i < len)
	{                                                                                                                                                                                                                                                                                                                                                                                                                                                                
		d[i] = s[i];
		i++;
	}
	return (dest);
}

int		main(void)
{
	char	*data = "thiß ß\xde\xad\xbe\xeftriñg will be øvérlapéd !\r\n"; 
	int		size = 0xF0 - 0xF;
	char 	dst1[240];
	char 	dst2[240];
	int		len = strlen(data);

	memset(dst1, 'A', sizeof(dst1));
	memset(dst2, 'A', sizeof(dst2));
	memcpy(dst1, data, len);
	memcpy(dst2, data, len);
	printf("dst2:%s\n", dst2);
	printf("dst1:%s\n", dst1);
	printf("memove: %s\n", (char *)memmove(dst1 + 3, dst1, size));
	printf("ft_memove: %s\n", (char *)ft_memmove(dst2 + 3, dst2, size));
	return (0);
}
