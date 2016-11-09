/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbourlet <pbourlet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 20:10:19 by pbourlet          #+#    #+#             */
/*   Updated: 2016/11/09 18:16:41 by pbourlet         ###   ########.fr       */
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
	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	if (!(frais = ft_strnew(len)))
		return (NULL);
	while (s1[i] != '\0' && i < len)
	{
		frais[i] = s1[i];
		i++;
	}
	while (s2[y] != '\0' && i < len)
	{
		frais[i] = s2[y];
		i++;
		y++;
	}
	return (frais);
}
