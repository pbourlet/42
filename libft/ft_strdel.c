/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbourlet <pbourlet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 12:17:26 by pbourlet          #+#    #+#             */
/*   Updated: 2016/11/06 22:14:59 by pbourlet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_strdel(char **as)
{
	int i;

	i = 0;
	while (as[i] != '\0')
	{
		free(as[i]);
		as[i] = NULL;
		i++;
	}
	free(as);
	as = NULL;
}
