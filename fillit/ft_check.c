/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pguillie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/20 16:26:54 by pguillie          #+#    #+#             */
/*   Updated: 2016/11/21 11:39:57 by pbourlet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

char	**ft_empty(char **t)
{
	int		i;

	i = 0;
	while (t[i])
		free(t[i++]);
	t = NULL;
	return (t);
}

int		ft_beside(char *s, int i, char l)
{
	int		blocks;

	blocks = 0;
	if (i > 3)
	{
		if (s[i - 4] == '#' || s[i - 4] == l)
			blocks++;
	}
	if (i % 4 > 0)
	{
		if (s[i - 1] == '#' || s[i - 1] == l)
			blocks++;
	}
	if (i % 4 < 3)
	{
		if (s[i + 1] == '#' || s[i + 1] == l)
			blocks++;
	}
	if (i < 12)
	{
		if (s[i + 4] == '#' || s[i + 4] == l)
			blocks++;
	}
	return (blocks);
}

char	*ft_create(char *s)
{
	char	*t;
	int		i;
	int		j;

	if (!(t = ft_strnew(17)))
		return (NULL);
	i = 0;
	j = 0;
	while (i < 21)
	{
		if (s[i] == '\n')
			i++;
		t[j++] = s[i++];
	}
	return (t);
}

char	*ft_convert(char *s, char l)
{
	char	*tetri;
	int		i;
	int		blocks;

	if (!(tetri = ft_create(s)))
		return (NULL);
	i = 0;
	blocks = 0;
	while (tetri[i])
	{
		if (tetri[i] != '.' && tetri[i] != '#')
			return (NULL);
		if (tetri[i] == '#')
		{
			tetri[i] = l;
			blocks++;
			if (!ft_beside(tetri, i, l))
				return (NULL);
		}
		i++;
	}
	if (blocks != 4)
		return (NULL);
	return (tetri);
}

char	**ft_check(int fd)
{
	char	**tab;
	char	*buffer;
	int		i;
	int		reading;
	char	letter;

	if (!(buffer = ft_strnew(21)) || !(tab = (char**)malloc(26 * 17)))
		return (NULL);
	i = 0;
	reading = 1;
	letter = 'A';
	while (reading)
	{
		read(fd, buffer, 20);
		tab[i++] = ft_convert(buffer, letter++);
		reading = read(fd, buffer, 1);
		if ((reading && buffer[0] != '\n') || !tab[i - 1])
			return (ft_empty(tab));
	}
	return (tab);
}
