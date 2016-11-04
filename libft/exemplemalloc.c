/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exemplemalloc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbourlet <pbourlet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 14:08:22 by pbourlet          #+#    #+#             */
/*   Updated: 2016/11/04 14:10:56 by pbourlet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char	*ft_strdup(const char *s)
{
	int		i;
	int		len;
	char	*str;

	i = 0;
	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	str = (char *)malloc(sizeof((*str) * (len)));
	while (i < len)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

void	main(int argc, char **argv)
{
	argc = 0;
	printf(" source: %s // ft_strdup : %s\n", argv[1], ft_strdup(argv[1]));
	printf(" source: %s // strdup : %s\n", argv[1], strdup(argv[1]));
}
