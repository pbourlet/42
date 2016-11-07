/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbourlet <pbourlet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 14:43:25 by pbourlet          #+#    #+#             */
/*   Updated: 2016/11/07 23:04:14 by pbourlet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*tab;
	int		i;
	int		len;
	int		neg;
	int		l;

	i = 0;
	neg = 0;
	len = ft_nblen(n);
	l = len;
	if (!(tab = malloc((len + 1))))
		return (NULL);
	if (n == -2147483648)
		return ("-2147483648");
	if (n < 0 && (neg = 1))
		n = -n;
	while (len--)
	{
		tab[len] = n % 10 + 48;
		n = n / 10;
	}
	if (neg == 1)
		tab[0] = '-';
	tab[l] = '\0';
	return (tab);
}
