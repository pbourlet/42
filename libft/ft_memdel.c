/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbourlet <pbourlet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 11:56:34 by pbourlet          #+#    #+#             */
/*   Updated: 2016/11/06 22:12:32 by pbourlet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_memdel(void **ap)
{
	int i;

	i = 0;
	while (ap[i] != '\0')
	{
		free(ap[i]);
		ap[i] = NULL;
	}
	free(ap);
	ap = NULL;
}
