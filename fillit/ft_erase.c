#include "libft.h"
#include "fillit.h"

void	ft_erase(char *map, char *tetri)
{
	int		l;
	int		i;
	int		b;

	l = 0;
	while (tetri[l] == '.')
		l++;
	i = 0;
	b = 0;
	while (b < 4)
	{
		if (map[i] == tetri[l])
		{
			map[i] = '.';
			b++;
		}
		i++;
	}
}
