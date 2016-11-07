/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbourlet <pbourlet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 20:10:19 by pbourlet          #+#    #+#             */
/*   Updated: 2016/11/07 14:15:12 by pbourlet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*frais;
	int		i;
	int		y;
	int		len;

	i = 0;
	y = 0;
	len = ft_strlen(s1) + ft_strlen(s2);
	if ((frais = malloc(len)) == NULL)
		return ("(null)");
	while (s1[i] != '\0')
	{
		frais[i] = s1[i];
		i++;
	}
	while (s2[y] != '\0')
	{
		frais[i] = s2[y];
		i++;
		y++;
	}
	return (frais);
}
