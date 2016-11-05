/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbourlet <pbourlet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 20:26:18 by pbourlet          #+#    #+#             */
/*   Updated: 2016/11/05 21:07:27 by pbourlet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const void	*tmp;
	size_t		i;

	i = 0;
	while (i < n)
	{
		tmp[i] = src[i];
		dest[i] = tmp[i];
		i++;
	}
	return (dest);
}
