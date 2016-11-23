#include "libft.h"
#include "fillit.h"

int		ft_count(char *map, int n)
{
	int		i;
	int		blocks;

	i = 0;
	blocks = 0;
	while (i < (n - 1) * 42 + n)
	{
		if (!((i - n) % 42) && i >= n)
			i = i - n + 42;
		if (map[i] != '.')
			blocks++;
		i++;
	}
	return (blocks);
}

int		ft_space(char *map, char *tetri, int n, int i)
{
	char	*dup;
	int		before;
	int		after;

	ft_erase(map, tetri);
	if (!(dup = ft_strdup(map)))
		return (-1);
	before = ft_count(map, n);
	while (i < (n - 1) * 42 + n)
	{
		if (!((i - n) % 42) && i >= n)
			i = i - n + 42;
		if (map[i] == '.')
		{
			ft_append(dup, tetri, i);
			after = ft_count(dup, n);
			if (after - before == 4)
				return (i);
			ft_strcpy(dup, map);
		}
		i++;
	}
	return (-1);
}
