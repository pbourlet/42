/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbourlet <pbourlet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 20:30:51 by pbourlet          #+#    #+#             */
/*   Updated: 2016/11/14 20:47:57 by pbourlet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	unsigned char		*ss;

	i = 0;
	ss = (unsigned char *)s;
	while (i < n && i <= ft_strlen(s))
	{
		if (ss[i] == c)
			return (ss + i);
		i++;
	}
	return (NULL);
}

int		main(void)
{
	char            ctab[11];
	int             itab[11];
	unsigned long   ltab[11];
	size_t          j;
	int             i;

	i = 0;
	printf("ftnull: %s\n", ft_memchr(NULL, 0, 0));
	printf("Vnull: %s\n", memchr(NULL, 0, 0));
	while (i < 5)
	{
		j = 0;
		while (j < 11)
		{
			ctab[j] = (char)rand();
			itab[j] = rand();
			ltab[j] = (unsigned long)rand() * 10000;
			j++;
		}
		printf("V: %s\n", memchr(ctab, i, sizeof(ctab)));
		printf("ft: %s\n", ft_memchr(ctab, i, sizeof(ctab)));
		printf("V: %s\n", memchr(itab, i, sizeof(itab)));
		printf("ft: %s\n", ft_memchr(itab, i, sizeof(itab)));
		printf("V: %s\n", memchr(ltab, i, sizeof(ltab)));
		printf("ft: %s\n", ft_memchr(ltab, i, sizeof(ltab)));
		++i;
	}

}
