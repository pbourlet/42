










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
		str = (char *) malloc(sizeof((*str) * (len)));
		while (i < len)
		{
				str[i] = s[i];
				i++;
		}
		str[i] = '\0';
		return (str);
}
