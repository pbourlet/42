/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbourlet <pbourlet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 14:24:26 by pbourlet          #+#    #+#             */
/*   Updated: 2016/11/09 22:27:16 by pbourlet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_word(char const *str, char c)
{
	int	i;
	int t;
	int cpt;

	i = 0;
	t = 0;
	cpt = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		while (str[i] != c && str[i] != '\0' && (t = 1))
			i++;
		if (str[i] == c)
		{
			cpt += (t == 1);
			t = 0;
			i += (str[i] != '\0');
		}
	}
	return (cpt);
}

static	int		wlen(char const *str, int i, char c)
{
	int len;

	len = 0;
	while (str[i] != c && str[i])
	{
		len++;
		i++;
	}
	return (len);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**tab;
	int		i;
	int		j;
	int		l;

	i = 0;
	j = 0;
	if (!(tab = malloc(sizeof(char *) * (ft_word(s, c) + 1))) || !s)
		return (NULL);
	while (s[i] != '\0' && j <= ft_word(s, c))
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] != '\0' && !(l = 0))
		{
			if (!(tab[j] = (char *)malloc(sizeof(char *) *
							(wlen(s, i, c) + 1))))
				return (NULL);
			while (s[i] != c && s[i] != '\0')
				tab[j][l++] = s[i++];
			tab[j++][l] = '\0';
		}
	}
	tab[j] = NULL;
	return (tab);
}
