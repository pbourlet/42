/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbourlet <pbourlet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 20:56:51 by pbourlet          #+#    #+#             */
/*   Updated: 2016/11/03 19:31:32 by pbourlet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && '\0' != s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int		main(int ac, char **av)
{
	char	*tmp;
	int		i;

	i = 1;
	while (i < ac - 1)
	{
		if (av[i] == '\0')
			i++;
		if (ft_strcmp(av[i], av[i + 1]) > 0)
		{
			tmp = av[i];
			av[i] = av[i + 1];
			av[i + 1] = tmp;
			i = 0;
		}
		i++;
	}
	i = 1;
	while (i < ac)
	{
		ft_putstr(av[i++]);
	}
	return (0);
}
