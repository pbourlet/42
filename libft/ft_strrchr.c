/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbourlet <pbourlet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 17:23:14 by pbourlet          #+#    #+#             */
/*   Updated: 2016/11/06 22:17:56 by pbourlet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(char *str)
{
	int i;
	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
	}

char    *ft_strrchr(char *s, int c)
{
	int l;
	l = ft_strlen(s);
	while (l != 0)
	{
		if (s[l] != c)
			l--;
		if (s[l] == c)
			return (s + l);
	}
	return ("(null)");
}
