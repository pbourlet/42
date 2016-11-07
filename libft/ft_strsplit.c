/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbourlet <pbourlet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 14:24:26 by pbourlet          #+#    #+#             */
/*   Updated: 2016/11/07 19:02:38 by pbourlet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_word(char const *str)
{
	int i;
	int t;
	int cpt;

	i = 0;
	t = 0;
	cpt = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		while (str[i] > 32 && str[i] != '\0' && (t = 1))
			i++;
		if (str[i] <= 32)
		{
			cpt += (t == 1);
			t = 0;
			i += (str[i] != '\0');
		}
	}
	return (cpt);
}

int		wlen(char const *str, int i)
{
	int len;

	len = 0;
	while (str[i] > 32 && str[i])
	{
		len++;
		i++;
	}
	return (len);
}

char	**ft_strsplit(char const *s, char c)
{
	char	**tab;
	int		i;
	int		j;
	int		l;

	i = 0;
	j = 0;
	if (!(tab = malloc(ft_word(s) + 1)))
		return (NULL);
	while (s[i] && j <= ft_word(s))
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] && !(l = 0))
		{
			if (!(tab[j] = malloc(wlen(s, i) + 1)))
				return (NULL);
			while (s[i] != c && s[i] != '\0')
				tab[j][l++] = s[i++];
			tab[j++][l] = '\0';
		}
	}
	tab[j] = NULL;
	return (tab);
}

int		main(int ac, char **av)
{
	
}
