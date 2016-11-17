/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_sample.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbourlet <pbourlet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 15:42:32 by pbourlet          #+#    #+#             */
/*   Updated: 2016/11/17 21:03:11 by pbourlet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

ssize_t		read(int fildes, void *buf, size_t nbyte);

int			ft_filelen(int file)
{
	int		i;
	char	bufl[16];
	int		byte;
	int		v;

	i = 1;
	while (read(file, bufl, 1))
		{
			if (bufl[0] == '\n')
				i++;
		}
	printf("nbligne: %d\n", i);
	close(file);
	return (i);
}

int			ft_test_sample(int	files, int len)
{
	char	buf[16];
	int		i;
	int		l;
	int		t;
	int		pt;
	int		diez;
	int		b;

	i = 0;
	b = 0;
	pt = 0;
	diez = 0;
	t = 0;
	l = 1;
	while (l < len)
	{
		read(files, buf, 1);
		if ((buf[0] == '.' || buf[0] == '#'))
		{
			if (t == 0 && (t = 1))
				printf("ligne(%d): ", l);
			printf("%c", buf[0]);
		}
		if (buf[0] == '.')
			pt++;
		if (buf[0] == '#')
			diez++;
		if (pt > 16 || (b == 40 && diez != 4) || (i < 4 && !(buf[0] == '.' || buf[0] == '#' || buf[0] == '\n')))
		{
			printf("\nmauvais tetra\n");
			return (0);
		}
		if ((i == 4) && !(buf[0] == '\n'))
		{
			printf("\ntrop ou pas assez de caractere\n");
			return (0);
		}
		if ((i == 4 || i == 0) && buf[0] == '\n')
		{
			if (i == 0)
			{
				b = 0;
				pt = 0;
				diez = 0;
			}
			i = -1;
			t = 0;
			l++;
			printf("\n");
		}
		i++;
		b = b + i;
	}
	printf("test correct\n");
	return (1);
}

int			main(int ac, char **av)
{
	int	file;
	int taille;

	if (ac == 2)
	{
		taille = ft_filelen(open(av[1], O_RDONLY));
		if (!(file = open(av[1], O_RDONLY)))
			return (0);
		printf("file: %d\n", file);
		printf("test: %d\n", ft_test_sample(file, taille));
	}
	return (0);
}
