/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbourlet <pbourlet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 18:29:53 by pbourlet          #+#    #+#             */
/*   Updated: 2016/11/06 22:18:16 by pbourlet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*tronc;
	size_t	i;

	i = 0;
	tronc = malloc(len - start);
	if (tronc == NULL)
		return ("(null)");
	while (i <= len && s[start + i] != '\0')
	{
		tronc[i] = s[start + i];
		i++;
	}
	tronc[i] = '\0';
	return (tronc);
}
