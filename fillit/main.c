/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pguillie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 12:14:39 by pguillie          #+#    #+#             */
/*   Updated: 2016/11/22 12:10:09 by pguillie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
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
	solution = NULL;
	if (!(tetriminos = ft_check(file)) || !(solution = ft_strnew(1765)))
		ft_errors("error");
	end = 0;
	size = 1;
	while (!end)
	{
		ft_memset(solution, '.', 1764);
		end = ft_solve(tetriminos, solution, ++size);
	}
	ft_disp(solution, size);
	close(file);
	return (0);
}
