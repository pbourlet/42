/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nblen.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbourlet <pbourlet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 17:13:24 by pbourlet          #+#    #+#             */
/*   Updated: 2016/11/07 23:01:50 by pbourlet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_nblen(int nb)
{
	double	diz;
	int		nd;
	int		neg;

	nd = 0;
	neg = 0;
	diz = 1;
	if (nb == -1)
		return (2);
	if (nb == 1 || nb == 0)
		return (1);
	if (nb == -2147483648)
		return (11);
	if (nb < 0)
	{
		neg = 1;
		nb = -nb;
	}
	while (diz < nb)
	{
		diz = diz * 10;
		nd++;
	}
	return (nd + neg);
}
