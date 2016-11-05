/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbourlet <pbourlet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 12:40:18 by pbourlet          #+#    #+#             */
/*   Updated: 2016/11/05 21:14:43 by pbourlet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strdup(const char *s)
{
	int		i;
	int		len;
	char	*str;

	i = 0;
	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	str = (char *)malloc(sizeof((*str) * (len)));
	while (i < len)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
