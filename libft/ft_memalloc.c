/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbourlet <pbourlet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 11:45:56 by pbourlet          #+#    #+#             */
/*   Updated: 2016/11/07 12:04:12 by pbourlet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*mem;
	char	*m;
	size_t	i;

	i = 0;
	mem = malloc(size);
	if (mem == NULL || size == 0)
		return (NULL);
	m = (char *)mem;
	while (i < size)
	{
		m[i] = 0;
		i++;
	}
	return (mem);
}
