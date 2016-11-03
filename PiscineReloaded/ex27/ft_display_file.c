/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbourlet <pbourlet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 16:25:20 by pbourlet          #+#    #+#             */
/*   Updated: 2016/11/03 19:42:46 by pbourlet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include "ft_fct.h"

int		ft_display_file(char *fichier)
{
	int		test;
	char	tab[2];
	int		len;

	if ((test = open(fichier, O_RDONLY)) == -1)
		return (0);
	while ((len = read(test, tab, 1)))
	{
		tab[len] = '\0';
		ft_putstr(tab);
	}
	close(test);
	return (0);
}

int		main(int argc, char **argv)
{
	if (argc == 1)
		ft_putstr("File name missing.\n");
	if (argc == 2)
	{
		ft_display_file(argv[1]);
	}
	if (argc > 2)
		ft_putstr("Too many arguments.\n");
	return (0);
}
