/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbourlet <pbourlet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 18:28:29 by pbourlet          #+#    #+#             */
/*   Updated: 2016/11/02 20:20:17 by pbourlet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int	nr;

	nr = 1;
	if (nb == 0)
		return (1);
	if (1 <= nb && nb < 13)
	{
		while (nb >= 1)
		{
			nr = nr * nb;
			nb--;
		}
		return (nr);
	}
	return (0);
}
