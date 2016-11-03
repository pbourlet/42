/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbourlet <pbourlet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 15:35:37 by pbourlet          #+#    #+#             */
/*   Updated: 2016/11/03 19:18:25 by pbourlet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char*))
{
	int	i;
	int	l;
	int	count;

	i = 0;
	l = 0;
	count = 0;
	while (tab[l] != '\0')
		l++;
	while (i < l)
	{
		if (f(tab[i]) == 1)
			count++;
		i++;
	}
	return (count);
}
