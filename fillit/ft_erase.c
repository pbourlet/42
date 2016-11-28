/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_erase.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbourlet <pbourlet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 10:19:10 by pbourlet          #+#    #+#             */
/*   Updated: 2016/11/28 14:13:41 by pbourlet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

void	ft_erase(char *map, char *tetri)
{
	int		i;
	int		l;

	l = 0;
	while (map[l] == '.' && l < 4)
		l++;
	if (l == 4)
		return ;
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
