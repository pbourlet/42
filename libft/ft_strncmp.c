










int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
		int i;
		int test;

		i = 0;
		test = 0;
		while (s1[i] != '\0' && s2[i] != '\0' && i < n - 1)
		{
				if (s1[i] != s2[i])
						return (s1[i] - s2[i]);
				i++;
		}
		return (s1[i] - s2[i]);
}
