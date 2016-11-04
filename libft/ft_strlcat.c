/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbourlet <pbourlet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 14:35:35 by pbourlet          #+#    #+#             */
/*   Updated: 2016/11/04 14:58:08 by pbourlet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned long int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	l;
	unsigned int	i;

	l = 0;
	i = 0;
	while (dest[l] != '\0')
		l++;
	while (i < size - 1)
	{
		dest[l] = src[i];
		i++;
		l++;
	}
	dest[l] = '\0';
	return ((l - 1) + (i - 1));
}
