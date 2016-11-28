/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pguillie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 12:14:39 by pguillie          #+#    #+#             */
/*   Updated: 2016/11/28 17:33:06 by pguillie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		main(int ac, char **av)
{
	int		file;
	char	**tetriminos;
	char	*solution;
	int		size;
	int		end;

	if (ac != 2)
		ft_errors("usage : ./fillit file");
	if ((file = open(av[1], O_RDONLY)) < 0)
		ft_errors("unable to open file");
	tetriminos = ft_check(file);
	if (!tetriminos || !(solution = ft_init(1764)))
		ft_errors("error");
	end = 0;
	size = ft_sizemin(tetriminos);
	while (!end)
		end = ft_solve(tetriminos, solution, size++);
	ft_disp(solution, size - 1);
	free(tetriminos);
	free(solution);
	close(file);
	return (0);
}
