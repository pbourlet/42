/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbourlet <pbourlet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 18:41:28 by pbourlet          #+#    #+#             */
/*   Updated: 2016/11/02 18:58:40 by pbourlet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_recursive_factorial(int nb)
{
	if (1 <= nb && nb < 13)
	{
		nb = nb * ft_recursive_factorial(nb - 1);
		return (nb);
	}
	if (nb == 0)
		return (1);
	return (0);
}
