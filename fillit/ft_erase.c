/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_erase.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pguillie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 18:07:12 by pguillie          #+#    #+#             */
/*   Updated: 2016/11/28 18:07:15 by pguillie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_erase(char *map, char *tetri)
{
	int		i;

	while (*tetri == '.')
		tetri++;
	i = 0;
	while (map[i] != '\0')
	{
		if (map[i] == *tetri)
			map[i] = '.';
		i++;
	}
}