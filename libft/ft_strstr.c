/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbourlet <pbourlet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 12:37:45 by pbourlet          #+#    #+#             */
/*   Updated: 2016/11/04 15:32:51 by pbourlet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int test;

	i = 0;
	while (str[i] != '\0' && to_find[i] != '\0')
	{
		if (str[i] != to_find[i])
		{
			i = 0;
			str++;
			test = 0;
		}
		if (str[i] == to_find[i] && to_find[i] != '\0')
		{
			test = 1;
			i++;
		}
	}
	if (test == 1)
		return (str);
	return ("(null)");
}
