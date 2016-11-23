/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbourlet <pbourlet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 12:12:36 by pbourlet          #+#    #+#             */
/*   Updated: 2016/11/21 17:05:12 by pbourlet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"
#include <stdio.h>

int		ft_move(char *map, int size, char dir)
{
	char	*mv;
	int		i;
	int		m;

	i = -1;
	m = 0;
	printf("    map: %s\n", map);
	if (dir == 'r')
	{
		while (size--)
			map[size] = map[size - 1];
		map[0] = '.';
	printf(" map->R: %s\n", map);
	}
	if (dir == 'l')
	{
		while (i++ <= size)
			map[i] = map[i + 1];
		map[size - 1] = '.';
	printf(" map->l: %s\n", map);
	}
	if (dir == 'u')
	{
		while (map[i + (size / 10)] != '\0')
		{
			map[i] = map[i + (size / 10)];
			i++;
		}
		printf(" map->u: %s\n", map);
	}
	return (1);
}

int		main(void)
{
	char	map[] = "\n..........\nAABB......\n.AAB......\n...B......\n..........\n..........\n..........\n..........\n..........\n..........\n";

	if (ft_move(map, 111, 'u'))
	{
		printf("mainmap: %s\n", map);
		return (printf("ok"));
	}
	return (0);
}
