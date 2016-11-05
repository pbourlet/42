/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbourlet <pbourlet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 18:06:15 by pbourlet          #+#    #+#             */
/*   Updated: 2016/11/05 18:13:27 by pbourlet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t i;

	i = 0;
	while (i < n && src[i] != '\0' && dest[i] != '\0')
	{
		if (src[i] != c)
			dest[i] = src[i];
		if (src[i] == c)
		{
			dest[i] = src[i];
			return (dest + (i + 1));
		}
		i++;
	}
	return ("NULL");
}
